#ifndef AVL_TREES_H

#define AVL_TREES_H

typedef struct AVLNode {
  int bf;
  AVLNode *left;
  int data;
  AVLNode *right;
}AVLNode;

AVLNode *getNewNode(int);//done
void insert_util(AVLNode **, int);//done
void insert(AVLNode **, int);
void traverse(AVLNode **, int);
AVLNode *RRrotate(AVLNode *);
AVLNode *LLrotate(AVLNode *);
AVLNode *LRrotate(AVLNode *);
AVLNode *RLrotate(AVLNode *);
int height(AVLNode *);
void calcBF(AVLNode **);
AVLNode *rotate(AVLNode *);
// copied from the net
void printBT(const std::string &, const AVLNode *, bool);//done
void printBT(const AVLNode *);


#endif // !AVL_TREES_H