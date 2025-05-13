#ifndef AVL_H
#define AVL_H

typedef struct AVLNode 
{
    int value;
    int height;
    struct AVLNode *left;
    struct AVLNode *right;
} AVLNode;

AVLNode* insertNode(AVLNode* node, int value, AVLNode* root);
AVLNode* deleteNode(AVLNode* node, int value);
AVLNode* searchNode(AVLNode* root, int value);
AVLNode* rotateRight(AVLNode* y);
AVLNode* rotateLeft(AVLNode* x);
AVLNode* createNode(int value);
int getHeight(AVLNode* node);
int getBalanceFactor(AVLNode* node);
int getHeight1(AVLNode* root);
void printTree(AVLNode* root, int space);
void inorderTraversal(AVLNode* root);
void preorderTraversal(AVLNode* root);
void postorderTraversal(AVLNode* root);
void freeTree(AVLNode* root);
void spaceBar();
void printSpaces(int count);
void printTreeLevel(AVLNode* root, int level, int space);
void printVerticalTree(AVLNode* root);

#endif
