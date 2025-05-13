#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "../lib/main.h"
#include "../include/heap.c"
#include "../include/menu.c"
#include "../include/choice.c"
#include "../include/operations.c"
#include "../include/printing.c"

int main()
{
    Heap* minHeap = createHeap(100, 0); 
    Heap* maxHeap = createHeap(100, 1);
    int choice, fod = 0, *flag;
    flag = &fod;

    do 
    {
        menu();
        scanf("%d", &choice);
        choicE(choice, minHeap, maxHeap, flag);
        
    } 
    while(choice != 3);

    destroyHeap(minHeap);
    destroyHeap(maxHeap);

    return 0;

}
