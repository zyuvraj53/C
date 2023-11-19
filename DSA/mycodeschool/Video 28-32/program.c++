#include <bits/stdc++.h>
#include <chrono>
#include <fstream>
#include <iostream>
#include <queue>
#include <string>

//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

//~ Even though this is C++, it is written like C, because the instructor does not know C++ that well.

//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

#define BEGIN \
  auto begin = std::chrono::high_resolution_clock::now();

#define END                                             \
  auto end = std::chrono::high_resolution_clock::now(); \
  std::chrono::duration<float> duration = end - begin;  \
  std::cout << "\n[Finished in " << duration.count() << " seconds]";

#define RED "\e[0;31m"
#define DEFAULT "\e[0m"

//~                            Binary Search Tree - Implementation in C/C++

typedef struct BstNode {
  int data;
  BstNode *left;
  BstNode *right;
} BstNode;

// Normal Functions
BstNode *insert(BstNode *, int);
BstNode *getNewNode(int);
bool search(BstNode *, int);
int findMin(BstNode *);
int findMax(BstNode *);
int findHeightRecursive(BstNode *);
int max(int, int);
void levelOrderTraversal(BstNode *);
void preorder(BstNode *);
void inorder(BstNode *);
void postorder(BstNode *);
bool isBstUtil(BstNode *);
bool isBinarySearchTree(BstNode *);
BstNode *deleteNode(BstNode *, int);
BstNode *findMinNode(BstNode *);
// Redundant Recursive Functions
int findMinRecursive(BstNode *);
int findMaxRecursive(BstNode *);
// Functions for Building Graph
void makeGraph(BstNode *);
void grapherPreorderTraversal(BstNode *, std::fstream &);
void displayGraph();
//extra functions: for studying
void inorder_iterative(BstNode *);

int main() {
  BEGIN

  BstNode *root = NULL; // even though we're writing root, this is not the root itself, but the pointer to the root.

  root = insert(root, 40);
  root = insert(root, 65);
  root = insert(root, 30);
  root = insert(root, 3);
  root = insert(root, 12);

  // std::cout << (search(root, 130) == true ? "true" : "false") << std::endl;

  //^ code for making graph
  //makeGraph(root);
  //displayGraph();
  //^ code for making graph ends

  inorder_iterative(root);

  END return 0;
}

void makeGraph(BstNode *root) {
  std::fstream grapher;
  grapher.open("graph.gv", std::ios::out);

  if (grapher.is_open()) {
    grapher << "graph {\n";
    grapherPreorderTraversal(root, grapher);
    grapher << "}";
    grapher.close();
  }
}

void grapherPreorderTraversal(BstNode *root, std::fstream &file) {
  if (root == NULL)
    return;
  if(root -> left == NULL && root -> right != NULL){
    file << root->data << "--";
    file << (root->right)->data << "\n";
    grapherPreorderTraversal(root->right, file);
  }else if(root -> right == NULL && root -> left != NULL){
    file << root->data << "--";
    file << (root->left)->data << "\n";
    grapherPreorderTraversal(root->left, file);
  }else if(root -> left != NULL && root -> right != NULL){
    file << root->data << "--";
    file << (root->left)->data << "\n";
    file << root->data << "--";
    file << (root->right)->data << "\n";
    grapherPreorderTraversal(root->left, file);
    grapherPreorderTraversal(root->right, file);
  }
}

void displayGraph(){
  system("dot -Tsvg graph.gv -o graph.svg");
  system("graph.svg");
}

BstNode *insert(BstNode *root, int data) {
  if (root == NULL) {
    root = getNewNode(data);
  } else if (data <= root->data) {
    root->left = insert(root->left, data);
  } else {
    root->right = insert(root->right, data);
  }
  return root;
}

BstNode *getNewNode(int data) {
  BstNode *newNode = new BstNode();
  newNode->data = data;
  newNode->left = NULL;
  newNode->right = NULL;

  return newNode;
}

bool search(BstNode *root, int data) {
  if (root == NULL)
    return false;
  else if (root->data == data)
    return true;
  else if (data >= root->data)
    return search(root->right, data);
  else
    return search(root->left, data);
}

int findMin(BstNode *root) {
  BstNode *current = root;

  if (root == NULL) {
    std::cerr << RED "The tree is empty." DEFAULT << std::endl;
    return EXIT_FAILURE;
  }

  while (current->left != NULL)
    current = current->left;

  return current->data;
}

int findMax(BstNode *root) {
  BstNode *current = root;

  if (root == NULL) {
    std::cerr << RED "The tree is empty." DEFAULT << std::endl;
    return EXIT_FAILURE;
  }

  while (current->right != NULL)
    current = current->right;

  return current->data;
}

int findMinRecursive(BstNode *root) {

  if (root == NULL) {
    std::cerr << "\e[0;31m"
                 "The tree is empty."
                 "\e[0m"
              << std::endl;
    return EXIT_FAILURE;
  }

  if (root->left == NULL) {
    return root->data;
  }

  return findMinRecursive(root->left);
}

int findMaxRecursive(BstNode *root) {

  if (root == NULL) {
    std::cerr << "\e[0;31m"
                 "The tree is empty."
                 "\e[0m"
              << std::endl;
    return EXIT_FAILURE;
  }

  if (root->right == NULL) {
    return root->data;
  }

  return findMinRecursive(root->right);
}

// Maybe this function needs a bit more look into it.(findMinNode)

BstNode *findMinNode(BstNode *root) {

  if (root == NULL) {
    std::cerr << "\e[0;31m"
                 "The tree is empty."
                 "\e[0m"
              << std::endl;
    return NULL;
  }

  if (root->left == NULL) {
    return root;
  }

  return findMinNode(root->left);
}

int max(int first, int second) {
  return first >= second ? first : second;
}

int findHeightRecursive(BstNode *root) {
  if (root == NULL)
    return -1; // If we were to count number of nodes, then we would return 0 for a leaf node, and 1 for an empty tree.

  return max(findHeightRecursive(root->left), findHeightRecursive(root->right)) + 1;
  // We added one because the code actually counts the nodes, and the number of edges is the number of nodes + 1.
}

//~ Video 32              Binary Tree traversal - Breadth / Depth first

//~ The level of the root node is Level - 0, and then it continues further...
//~ If we were to go to level - 0 and traverse root node, and then go to level - 1, and traverse from left to right, and then to level - 2, and traverse from left to right, and so on... then this is called as Level Order Traversal - this is also Breadth First Search.

//~ If we were to go to the first leaf, and then the second leaf from either left to right or vice versa... then this would be known as Depth First Search.

//~ Based on the traversal types in Depth First Search, there are three possibilities -
//* 1. Preorder Traversal  -> <root><left><right>
//* 2. Inorder Traversal   -> <left><root><right>
//* 3. Postorder Traversal -> <left><right><root>

//~ Notice only the position of <root> is changing here.
//~ If we were to denote data(D) to <root>, left(L) to <left>, right(R) to <right>, then:
//* 1. Preorder Traversal  -> D-L-R
//* 2. Inorder Traversal   -> L-D-R
//* 3. Postorder Traversal -> L-R-D

//?                       Video 33 - Level Order Traversal
//~ For BFS, we use a queue.

void levelOrderTraversal(BstNode *root) { //mark
  if (root == NULL) {
    return;
  } else {
    std::queue<BstNode *> q;
    q.push(root);
    // while there is atleast one discovered node:
    while (!q.empty()) {
      BstNode *current = q.front();
      std::cout << current->data << std::endl;
      if (current->left != NULL) {
        q.push(current->left);
      }
      if (current->right != NULL) {
        q.push(current->right);
      }
      q.pop(); // removing the first element
    }
  }
}

//~ Time Complexity => O(n)
//~ Space Complexity => if BST looks like a Linked List -> O(1), if perfect -> best/avg O(n)

//?                Video 34 - Preorder/Inorder/Postorder Traversal

void preorder(BstNode *root) {
  if (root == NULL)
    return;
  printf("%d\n", root->data);
  preorder(root->left);
  preorder(root->right);
}

void inorder(BstNode *root) {
  if (root == NULL)
    return;
  preorder(root->left);
  printf("%d\n", root->data);
  preorder(root->right);
}

void postorder(BstNode *root) {
  if (root == NULL)
    return;
  postorder(root->left);
  postorder(root->right);
  printf("%d\n", root->data);
}

//~ Time Complexity => O(n)
//~ Space Complexity => O(h), in worst cast, height of the tree will be O(n)
//~ In avg/best case O(log(n))

//?           Video 35 - Check if a Binary Tree is Binary Search Tree or not

//~ Since the root node can have any number, we will just check if it is between INT_MAX, and INT_MIN.
//~ Then for the next node on the left the bounds will be INT_MIN and value in the upper node(inclusive), for the node on the right, the bounds will be the value in the upper node (exclusive) and INT_MAX.

//~ However, the user may just want to pass the root node, and not INT_MIN and INT_MAX, so we will write it as BstUtil, and call that from another function.

bool isBstUtil(BstNode *root, int minValue, int maxValue) { // It should be BtNode *root, but at the time I've not written the implementation for a Binary Tree(regular).
  if (root == NULL)
    return true;
  if (root->data <= minValue && root->data > maxValue && isBstUtil(root->left, minValue, maxValue) && isBstUtil(root->right, minValue, maxValue))
    return true;
  else
    return false;
}

bool isBinarySearchTree(BstNode *root) {
  isBstUtil(root, INT_MIN, INT_MAX);
}

//~ There is another solution to this problem - We can perform inorder traversal of the Binary Tree, and if the tree is BST, then the data would be in sorted order. During the whole traversal, we only need to keep track of previously read node, and at anytime the data in the node that we're reading must be greater than data in previously read node.

//* My comments -
//~ I think that we can do an even simpler check with a simple recursion technique -
//~ We just check if the data in the node which we're reading is greater than the left one or not, and the lesser than the right one or not, and then pass the left and right subtree into the same function... maybe some other day, I'll implement it.

//?                             Video 36 - Deleting a node

BstNode *deleteNode(BstNode *root, int data) {
  if (root == NULL) {
    return root;
  }
  // Did not understand this part, watch again...
  //  By the way, he says...
  //~ "Now the root of the left subtree, i.e., the left child of the current node, may change after deletion, but the good thing is, the delete function will return the address of the modified root of the left subtree. So, we can set the return as left child."
  //  The part which I didn't understand was: if the left node of the root were to be deleted, then why are we assigning it to the left child of the root?
  else if (data < root->data) {
    root->left = deleteNode(root->left, data);
  } else if (data > root->data) {
    root->right = deleteNode(root->right, data);
  } else {
    //% Case 1: No Child
    if (root->left == NULL && root->right == NULL) {
      delete root;
      // Now, root is a dangling pointer, since the object in heap has been deleted, but root still has its address.
      root = NULL;
      // Reference of this node in its parent will not be fixed here. Once this recursive call finishes, then somewhere in the two else-ifs, the link will be corrected.

      //% Case 2: Only 1 child
    } else if (root->left == NULL) {
      BstNode *temp = root;
      root = root->right;
      delete temp;
    } else if (root->right == NULL) {
      BstNode *temp = root;
      root = root->left;
      delete temp;
    }
    //% Case 3: 2 children
    else {
      BstNode *temp = findMinNode(root->right);
      root->data = temp->data;
      root->right = deleteNode(root->right, temp->data);
    }
  }
  return root;
}

//$ extra functions: for studying

void inorder_iterative(BstNode *root) {
  std::stack<BstNode *> s;

  BstNode *current = root;

  int done = 0;

  while (done == 0) {

    if (current != NULL) {
      s.push(current);
      current = current->left;
    } else {
      if (!s.empty()) {
        current = s.top();
        s.pop();
        printf("%d ", current->data);
        current = current->right;
      } else {
        done = 1;
      }
    }
  }
}