#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "../lib/AVL.h"
#include "../include/AVL.c"
#include "../include/printing.c"
#include "../include/traversal.c"
#include "../include/operations.c"
#include "../include/misc.c"

int main() 
{
    AVLNode* root = NULL;
    char input[100];

    while(1) 
    {
        menu();
        int choice;
        scanf("%d", &choice);
        clearBuffer();
        
        switch(choice) 
        {
            case 1: 
            {
                printf("Enter numbers separated by commas (end with '!'): ");
                scanf(" %[^\n]", input);
                char *token = strtok(input, ",!");
                while (token) 
                {
                    root = insertNode(root, atoi(token), root);
                    token = strtok(NULL, ",!");
                }

                break;
            }

            case 2: 
            {
                if(root == NULL)
                {
                    printf("Empty Tree!");
                }
                else
                {
                    int val;
                    printf("Enter value to delete: ");
                    scanf("%d", &val);
                    root = deleteNode(root, val);
                }
                spaceBar();
                break;
            }
            case 3:
            if(root == NULL)
            {
                printf("Empty Tree!");
            }
            else
            {
                printf("\nCurrent AVL Tree:\n");
                printVerticalTree(root);
            }
            spaceBar();
            break;
            case 4:
            if(root == NULL)
            {
                printf("Empty Tree!");
            }
            else
            {
                printf("\nInorder: ");
                inorderTraversal(root);
                printf("\nPreorder: ");
                preorderTraversal(root);
                printf("\nPostorder: ");
                postorderTraversal(root);
                printf("\n");
            }
                spaceBar();
                break;

            case 5: 
            {
                if(root == NULL)
                {
                    printf("Empty Tree!");
                }
                else
                {
                    int val;
                    printf("Enter value to search: ");
                    scanf("%d", &val);
                    if (searchNode(root, val))
                    {
                        printf("Value %d found in AVL Tree.\n", val);
                        printVerticalTree(root);
                    }
                        
                    else
                        printf("Value %d not found.\n", val);
                }
                spaceBar();
                break;
            }

            case 6:
                if(root == NULL)
                {
                    printf("Terminating Program");
                }
                else
                {
                    freeTree(root);
                    printf("Tree flushed. Exiting program...\n");
                }
                spaceBar();
                return 0;

            default:
                printf("Invalid option. Try again.\n");
        }
    }
}