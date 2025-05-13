#include<conio.h>
#include<math.h>
#include "../lib/main.h"

int getParentIndex(int index) 
{
    return (index - 1) / 2;
}

int getLeftChildIndex(int index) 
{
    return 2 * index + 1;
}

int getRightChildIndex(int index) 
{
    return 2 * index + 2;
}

void swap(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


void heapifyUp(Heap* heap, int index) 
{
    int parent = getParentIndex(index);
    if(index > 0) 
    {
        if((heap->heap_type == 0 && heap->array[index] < heap->array[parent]) || 
            (heap->heap_type == 1 && heap->array[index] > heap->array[parent])) 
        { 
            swap(&heap->array[index], &heap->array[parent]);
            printf("\nHeapifying %d, ", heap->array[index]);
            waitSpace();
            heapifyUp(heap, parent);
        }
    }
}

void heapifyDown(Heap* heap, int index) 
{
    int left = getLeftChildIndex(index);
    int right = getRightChildIndex(index);
    int largest = index;

    if(heap->heap_type == 0) { // Min Heap
        if(left < heap->size && heap->array[left] < heap->array[largest]) 
        {
            largest = left;
        }

        if(right < heap->size && heap->array[right] < heap->array[largest]) 
        {
            largest = right;
        }
    } 
    
    else 
    {
        if(left < heap->size && heap->array[left] > heap->array[largest]) 
        {
            largest = left;
        }

        if(right < heap->size && heap->array[right] > heap->array[largest]) 
        {
            largest = right;
        }
    }

    if(largest != index) 
    {
        swap(&heap->array[index], &heap->array[largest]);
        printf("\nHeapifying %d, ", heap->array[index]);
        waitSpace();
        heapifyDown(heap, largest);
    }
}