#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include "../lib/AVL.h"

int getHeight1(AVLNode* root) 
{
    if (root == NULL) {
        return 0;
    } else {
        int leftHeight = getHeight1(root->left);
        int rightHeight = getHeight1(root->right);
        return (leftHeight > rightHeight) ? leftHeight + 1 : rightHeight + 1;
    }
}

void printSpaces(int count) 
{
    for(int i = 0; i < count; i++) 
    {
        printf(" ");
    }
}

void printTreeLevel(AVLNode* root, int level, int space) 
{
    if (root == NULL) {
        printSpaces(space); 
        return;
    }
    if (level == 1) {
        printSpaces(space);
        printf("%d", root->value); 
        printSpaces(space); 
    } else if (level > 1) {
        printTreeLevel(root->left, level - 1, space);
        printTreeLevel(root->right, level - 1, space);
    }
}

void printVerticalTree(AVLNode* root) 
{
    int height = getHeight1(root);
    int space = (int)pow(2, height); 

    for (int i = 1; i <= height; i++) {
        printTreeLevel(root, i, space);
        printf("\n"); 
        space /= 2; 
    }
}