/*
============================================================================
FILE : parañaqueRenz_LE_5_21.c
AUTHOR : Renz Joseph P. Parañaque
DESCRIPTION : Multiplication Table. The program will ask the user to input the
number of rows and columns the table should have and display the multiplication table on screen.
Use tab for the spacing between numbers horizontally.
COPYRIGHT : Renz Joseph P. Para�aque
REVISION HISTORY
Date: 10.01.2024 Time: 3:01 P.M.
============================================================================
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<windows.h>
#include<unistd.h>

int main()
{
    SetConsoleTitle("Multiplication Table");

    int column1, column, row, row1, product;
    //Ask user input
    printf("input number of rows: ");
    scanf("%d", &row1);
    printf("Input number of columns: ");
    scanf("%d", &column1);
    //Output
    printf("\nMultiplication Table\n\n");
    //Print column header
    for(column = 1; column <= column1; column++)
    {
        printf("\t%d", column);
    }

    printf("\n");

    for(row = 1; row <= row1; row++)
    {
        //Print row header
        printf("%d", row);
        //Multiply column and row and print product
        for(column = 1; column <= column1; column++)
        {
            product = column * row;
            printf("\t%d", product);
        }

        printf("\n");
    }
    //Loop back to main()
    sleep(6);
    system("CLS");
    return main();
}
