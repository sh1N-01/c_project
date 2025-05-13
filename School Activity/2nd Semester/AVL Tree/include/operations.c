#include<stdio.h>
#include<stdlib.h>
#include "../lib/AVL.h"

AVLNode* createNode(int value) 
{
    AVLNode* node = (AVLNode*)malloc(sizeof(AVLNode));
    node->value = value;
    node->height = 1;
    node->left = NULL;
    node->right = NULL;
    return node;
}

AVLNode* insertNode(AVLNode* node, int value, AVLNode* root) 
{
    
    if(!node) return createNode(value);

    if(value < node->value)
        node->left = insertNode(node->left, value, root);
    else if(value > node->value)
        node->right = insertNode(node->right, value, root);
    else 
    {
        printf("Error: Duplicate value %d not allowed.\n", value);
        return node;
    }

    printf("\n\nInserting %d to the tree.", value);

    node->height = 1 + (getHeight(node->left) > getHeight(node->right) ? getHeight(node->left) : getHeight(node->right));
    int balance = getBalanceFactor(node);

    if(balance > 1 && value < node->left->value)
    {
        printf("\nPerforming Right Rotation (LL Case) on %d\n", value);
        return rotateRight(node);
    }  

    if(balance < -1 && value > node->right->value)
    {
        printf("\nPerforming Left Rotation (RR Case) on %d\n", value);
        return rotateLeft(node); 
    }

    if(balance > 1 && value > node->left->value) 
    {
        printf("\nPerforming Left-Right Rotation on %d\n", value);
        node->left = rotateLeft(node->left);
        printf("\n");
        printVerticalTree(root);
        return rotateRight(node);
    }

    if(balance < -1 && value < node->right->value) 
    { 
        printf("\nPerforming Right-Left Rotation on %d\n", value);
        node->right = rotateRight(node->right);
        printf("\n");
        printVerticalTree(root);
        return rotateLeft(node);
    }

    printf("\n");
    printVerticalTree(root);
    spaceBar();
    return node;
}

AVLNode* deleteNode(AVLNode* root, int value) 
{
    if (root == NULL) return root;

    if (value < root->value)
        root->left = deleteNode(root->left, value);
    else if (value > root->value)
        root->right = deleteNode(root->right, value);
    else 
    {
        if(root->left == NULL || root->right == NULL) 
        {
            AVLNode* temp = root->left ? root->left : root->right;
            if(temp == NULL) 
            {
                temp = root;
                root = NULL;
            } 
            
            else
                *root = *temp; 
            free(temp);
        } 
        
        else 
        {
            AVLNode* temp = minValueNode(root->right);
            root->value = temp->value;
            root->right = deleteNode(root->right, temp->value);
        }

        printf("\n");
        printVerticalTree(root);
    }

    if (root == NULL) return root;

    root->height = 1 + (getHeight(root->left) > getHeight(root->right) ? getHeight(root->left) : getHeight(root->right));
    int balance = getBalanceFactor(root);

    if(balance > 1 && getBalanceFactor(root->left) >= 0)
        return rotateRight(root);
    if(balance > 1 && getBalanceFactor(root->left) < 0) 
    {
        root->left = rotateLeft(root->left);
        return rotateRight(root);
    }

    if(balance < -1 && getBalanceFactor(root->right) <= 0)
        return rotateLeft(root);
    if(balance < -1 && getBalanceFactor(root->right) > 0) 
    {
        root->right = rotateRight(root->right);
        return rotateLeft(root);
    }

    return root;
}

AVLNode* searchNode(AVLNode* root, int value) 
{
    if (root == NULL || root->value == value)
        return root;
    if (value < root->value)
        return searchNode(root->left, value);
    return searchNode(root->right, value);
}