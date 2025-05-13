#include<stdio.h>
#include "../lib/main.h"

void choicE(int choice, Heap *minHeap, Heap *maxHeap, int *flag)
{
    int value, deleteValue;
    char input[256];

    switch(choice) 
    {
        case 1:
            printf("\n=== ADD NEW NODES ===\n");
            printf("Insert values to add (Separate with ',' end with '!'): ");
            scanf(" %[^\n]", input);

            char *token = strtok(input, ",!");
            while (token != NULL) 
            {
                value = atoi(token);
                insertNode(minHeap, value);
                insertNode(maxHeap, value);
                displayHeap(minHeap, "Min");
                displayHeap(maxHeap, "Max");
                token = strtok(NULL, ",!");
            }
            printf("\nSUCCESS: node added!!!\n");
            waitSpace();
            *flag = 1;
            break;

        case 2:
            if(flag == 0)
            {
                printf("Empty. Cannot perform deletion.\n\n");
            }

            else
            {
                printf("\n=== DELETE NODE ===\n");
                printf("\nDelete the root for how many times?: ");
                scanf("%d", &deleteValue);

                for(int i = 1; i <= deleteValue; i++)
                {
                    if(deleteNode(minHeap) && deleteNode(maxHeap)) 
                    {
                        printf("\nSUCCESS: node removed !!!\n");
                    } 
                    else 
                    {
                        printf("\nFAILED removing node !!! Skipping...\n");
                    }

                    displayHeap(minHeap, "Min");
                    displayHeap(maxHeap, "Max");
                }
            }
            
            waitSpace();
            break;

        case 3:
            printf("Exiting...\n");
            break;

        default:
            printf("Invalid choice. Please try again.\n");
    }
}