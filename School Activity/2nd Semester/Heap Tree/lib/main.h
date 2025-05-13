#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

typedef struct 
{
    int *array;
    int capacity;
    int size;
    int heap_type;
} Heap;

Heap* createHeap(int capacity, int heap_type);
void destroyHeap(Heap* heap);
void insertNode(Heap* heap, int value);
int deleteNode(Heap* heap);
void displayHeap(Heap* heap, char *heap_name);
void heapifyUp(Heap* heap, int index);
void heapifyDown(Heap* heap, int index);
void swap(int *a, int *b);
int getParentIndex(int index);
int getLeftChildIndex(int index);
int getRightChildIndex(int index);
void printTreeHelper(Heap *heap, int index, int level, int max_level);
void waitSpace();
void menu();
void choicE(int choice, Heap *minHeap, Heap *maxHeap, int *flag);

#endif