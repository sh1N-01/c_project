/*
==Sorting Algorithm==
- Arrange nodes in ascending / descending order
- Deploy 3 sorting methods
- Ask for user input
- Limiter "!"
- Implement error catching
*/

#include<stdio.h>
#include<stdlib.h>

#include "../lib/main.h"

void exchangeSort(int n, int clone[]);
void duplicaTor(int n, int clone[], int org[]);
void selectionSort(int n, int clone[]);
void insertionSort(int n, int clone[]);

int main()
{
    system("CLS");

    int org[] = {10, 5, 0, 2, 7};
    int n = sizeof(org)/sizeof(org[0]);
    int clone[n];

    printf("Cloned unsorted array: ");
    for(int i = 0; i < n; i++)
    {
        clone[i] = org[i];
        printf("%d ", clone[i]);
    }

    exchangeSort(n, clone);
    duplicaTor(n, clone, org);
    selectionSort(n, clone);
    duplicaTor(n, clone, org);
    insertionSort(n, clone);

    printf("\n\n");
    system("Pause");
}

void duplicaTor(int n, int clone[], int org[])
{
    //Reset
    for(int i = 0; i < n; i++)
    {
        clone[i] = org[i];
    }
}

void exchangeSort(int n, int clone[])
{
    //Exchange sort
    printf("\n\nCloned sorted array (Exchange): ");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(clone[i] < clone[j])
            {
                int temp = clone[i];
                clone[i] = clone[j];
                clone[j] = temp;
            }
        }
    }
    //Print//
    for(int i = 0; i < n; i++)
    {
        printf("%d ", clone[i]);
    }
    printf("\n\n");
}

void selectionSort(int n, int clone[])
{
    //Selection Sort
    printf("Cloned sorted array (Selection): ");
    for(int i = 0; i < n; i++)
    {
        int min = i;

        for(int j = i+1; j < n; j++)
        {
            if(clone[j] < clone[min])
            {
                min = j;
            }
        }

        if(min != i) 
        {
            int temp = clone[i];
            clone[i] = clone[min];
            clone[min] = temp;
        }
    }
    //Print//
    for(int i = 0; i < n; i++)
    {
        printf("%d ", clone[i]);
    }
    printf("\n\n");
}

void insertionSort(int n, int clone[])
{
    //Insertion Sort
    printf("Cloned sorted array (Insertion): ");
    for(int i = 1; i < n; i++)
    {
        int key = clone[i]; //First Iteration: 5//
        int j = i - 1;  //First Iteration: 0//

        while(j >= 0 && clone[j] > key) //First Iteration: True(10>5)//
        {
            clone[j+1] = clone[j]; //First Iteration: 2nd array(5) = 1st array(10)//
            j -= 1; //First Iteration: -1//
        }

        clone[j+1] = key; //First Iteration: 2nd array(-1+1) = 5//
    }
    //Print//
    for(int i = 0; i < n; i++)
    {
        printf("%d ", clone[i]);
    }
}