#include<stdio.h> 
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

#define boolean bool

#define NUM_CHARS 256

//~ Trie - The TRIE Data Structure

//~ Sometimes also called prefix trees or digital trees
//~ Any sequence of symbols can be represented as a trie - strings of binary bits or ascii characters

//~ A trie is a tree.

typedef struct trieNode {
  //% We are not going to have any character value of the node, in the node, we could do it, but he says he doesn't really need to, because it's going to be implied by the links from the parent.

  bool terminal; //% This is to imply the end of a word
  //~ We need children of the nodes, and our children are going to be an array of trieNode pointers.
  struct trieNode *children[NUM_CHARS];//% NUM_CHAR is the number of different characters in our set of symbols that we're going to consider.
  //~ Each of these pointers is going to tell us where to find the node for that particular character.
  //~ These pointers will also be set to NULL if there's no child for that character.
  //% This array is basically going to be a lookup table.

}trieNode;

trieNode *createNode();
bool trieInsert(trieNode **root, char *signedText);

int main(int argc, char *argv[]){


  return 0;
}

trieNode *createNode(){
  trieNode *newNode = malloc(sizeof *newNode);

  for(int i = 0; i < NUM_CHARS; i++){
    newNode->children[i] = NULL;
  }
  newNode->terminal = false;
  
  return newNode;
}

bool trieInsert(trieNode **root, char *signedText){
  trieNode *currentNode = *root;
  int i = 0;
  while(signedText[i] != '\0'){
    int index = signedText[i];
    if(currentNode->children[index] == NULL){
      currentNode->children[index] = createNode();
    }
    currentNode = currentNode->children[index];
    i++;
  }
  currentNode->terminal = true;
  return true;
} 