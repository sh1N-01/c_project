#include<stdlib.h>
#include "../lib/main.h"

void displayHeap(Heap* heap, char *heap_name)
{
    printf("\n\n=== %s Heap ===\n\n", heap_name);
    
    if(heap->size == 0) 
    {
        printf("Empty heap\n");
        return;
    }

    int max_level = (int)ceil(log2(heap->size + 1));
    int max_value = 0;

    for(int i=0; i<heap->size; i++) 
    {
        if(heap->array[i] > max_value) max_value = heap->array[i];
    }

    int max_digits = snprintf(NULL, 0, "%d", max_value);
    int *queue = malloc(sizeof(int) * heap->size);
    int front = 0, rear = 0;
    
    queue[rear++] = 0;
    
    int current_level = 0;
    int nodes_in_current_level = 1;
    int nodes_in_next_level = 0;
    
    int last_level_nodes = (int)pow(2, max_level-1);
    int spacing = (int)pow(2, max_level) * max_digits;
    int indent = spacing / 2 - max_digits/2;
    
    while(front < rear) 
    {
        for(int i = 0; i < indent; i++) 
        {
            printf(" ");
        }
        
        int index = queue[front++];
        printf("%*d", max_digits, heap->array[index]);

        int left_child = 2 * index + 1;
        if(left_child < heap->size) 
        {
            queue[rear++] = left_child;
            nodes_in_next_level++;
        }

        int right_child = 2 * index + 2;
        if(right_child < heap->size) 
        {
            queue[rear++] = right_child;
            nodes_in_next_level++;
        }
        
        nodes_in_current_level--;
        if(nodes_in_current_level == 0) 
        {
            printf("\n");
            current_level++;
            nodes_in_current_level = nodes_in_next_level;
            nodes_in_next_level = 0;
            
            spacing = indent;
            indent = (indent - max_digits) / 2;
        } 
        
        else 
        {
            
            for(int i = 0; i < spacing; i++) 
            {
                printf(" ");
            }
        }
    }
    
    free(queue);
    printf("\n");
}

void printTreeHelper(Heap *heap, int index, int level, int max_level)
{
    if(index < heap->size)
    {
        printTreeHelper(heap, getRightChildIndex(index), level + 1, max_level);

        for(int i = 0; i < level; i++)
        {
            printf("    "); // Adjust spaces for better alignment
        }

        printf("%02d\n", heap->array[index]);
        printTreeHelper(heap, getLeftChildIndex(index), level + 1, max_level);
    }
}