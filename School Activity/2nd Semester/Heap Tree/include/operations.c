#include<stdlib.h>
#include "../lib/main.h"

Heap* createHeap(int capacity, int heap_type) 
{
    Heap* heap = (Heap*)malloc(sizeof(Heap));
    if(!heap) 
    {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }
    heap->capacity = capacity;
    heap->size = 0;
    heap->heap_type = heap_type;
    heap->array = (int*)malloc(capacity * sizeof(int));
    if(!heap->array) 
    {
        perror("Memory allocation failed");
        free(heap);
        exit(EXIT_FAILURE);
    }
    return heap;
}

void insertNode(Heap* heap, int value) 
{
    if(heap->size == heap->capacity)
    {
        printf("Heap is full. Cannot insert.\n");
        return;
    }

    heap->array[heap->size] = value;
    heap->size++;
    heapifyUp(heap, heap->size - 1);
}

int deleteNode(Heap* heap) 
{
    if (heap->size == 0) {
        printf("Heap is empty.\n");
        return 0;
    }

    heap->array[0] = heap->array[heap->size - 1];
    heap->size--;
    
    heapifyDown(heap, 0);
    return 1;
}

void destroyHeap(Heap* heap) 
{
    if(heap) 
    {
        free(heap->array);
        free(heap);
    }
}

void waitSpace()
{
    do
    {
        printf("Press [SPACE] to continue...");
    }
    while(getch() != ' ');
}