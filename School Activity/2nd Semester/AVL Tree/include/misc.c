#include<stdio.h>
#include<stdlib.h>
#include "../lib/AVL.h"

void clearBuffer() 
{
    while (getchar() != '\n');
}

void menu() 
{
    printf("\n\nAVL Tree Menu:");
    printf("\n1. Insert Node");
    printf("\n2. Delete Node");
    printf("\n3. Display Tree");
    printf("\n4. Traversal Order");
    printf("\n5. Search Node");
    printf("\n6. Exit");
    printf("\n\nSelect an option: ");
}

void spaceBar()
{
    do
    {
        printf("\n\nPress [SPACE] to continue...");
    } 
    while(getch() != ' ');
    
}

void freeTree(AVLNode* root) 
{
    if (!root) return;
    freeTree(root->left);
    freeTree(root->right);
    free(root);
}

