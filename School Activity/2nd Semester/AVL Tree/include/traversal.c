#include<stdio.h>
#include<stdlib.h>
#include "../lib/AVL.h"

void inorderTraversal(AVLNode* root) 
{
    if(root == NULL) 
    {
        return;
    }

    inorderTraversal(root->left);
    printf("%d ", root->value);
    inorderTraversal(root->right);
}

void preorderTraversal(AVLNode* root) 
{
    if(root == NULL) 
    {
        return;
    }

    printf("%d ", root->value);
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void postorderTraversal(AVLNode* root) 
{
    if(root == NULL) 
    {
        return;
    }
    
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    printf("%d ", root->value);
}