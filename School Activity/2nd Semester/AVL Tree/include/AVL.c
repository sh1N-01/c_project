#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include "../lib/AVL.h"

int getHeight(AVLNode* node) 
{
    return node ? node->height : 0;
}

int getBalanceFactor(AVLNode* node) 
{
    return node ? getHeight(node->left) - getHeight(node->right) : 0;
}

AVLNode* minValueNode(AVLNode* node) 
{
    AVLNode* current = node;
    while (current->left != NULL)
        current = current->left;
    return current;
}


AVLNode* rotateRight(AVLNode* y) 
{
    AVLNode* x = y->left;
    AVLNode* T2 = x->right;

    x->right = y;
    y->left = T2;

    y->height = 1 + (getHeight(y->left) > getHeight(y->right) ? getHeight(y->left) : getHeight(y->right));
    x->height = 1 + (getHeight(x->left) > getHeight(x->right) ? getHeight(x->left) : getHeight(x->right));

    return x;
}

AVLNode* rotateLeft(AVLNode* x) 
{
    AVLNode* y = x->right;
    AVLNode* T2 = y->left;

    y->left = x;
    x->right = T2;

    x->height = 1 + (getHeight(x->left) > getHeight(x->right) ? getHeight(x->left) : getHeight(x->right));
    y->height = 1 + (getHeight(y->left) > getHeight(y->right) ? getHeight(y->left) : getHeight(y->right));

    return y;
}