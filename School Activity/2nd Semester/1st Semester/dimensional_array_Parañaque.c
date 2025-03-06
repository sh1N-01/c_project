#include<stdlib.h>
#include<stdio.h>
#include<string.h>
//Predefine Function
int loopMatrix(int num[5][6]);
int matrixPrint(int num[5][6]);
//Main Function
int main()
{
    int num[5][6];
    loopMatrix(num);
    matrixPrint(num);
}
//Function for loop matrix
int loopMatrix(int num[5][6])
{
    //Initiliazes row and col to 0
    int row = 0, col = 0;
    //Loop for assigning each row and column to a matrix
    for(row = 0; row < 5; row++)
    {
        for(col = 0; col < 6; col++)
        {
            printf("Enter a number for row [%d] column [%d]: ", row, col);
            scanf("%d", &num[row][col]);
        }
    }
}
//Prints Number Matrix
int matrixPrint(int num[5][6])
{
    //Print inputted numbers
    printf("\nNumber Matrix\n\n");
    //Initiliazes row and col to 0
    int row = 0, col = 0;
    //Loop to print number matrix
    for(row = 0; row < 5; row++)
    {
        for(col = 0; col < 6; col++)
        {
            printf("%d\t", num[row][col]);
        }

        printf("\n");
    }
}
