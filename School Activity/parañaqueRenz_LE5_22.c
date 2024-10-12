/*
============================================================================
FILE : parañaqueRenz_LE_5_22.c
AUTHOR : Renz Joseph P. Parañaque
DESCRIPTION : Pyramid. Create a program that would display a number pyramid, 
not exceeding the row number
COPYRIGHT : Renz Joseph P. Para�aque
REVISION HISTORY
Date: 10.01.2024 Time: 3:48 P.M.
Date: 10.01.2024 Time: 8:36 P.M.
============================================================================
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<windows.h>
#include<unistd.h>

int main()
{
    SetConsoleTitle("Number Pyramid");

    int column, num, row;
    //Ask user input
    printf("Enter a value of N: ");
    scanf("%d", &num);
    //Display Output
    for(row = 1; row <= num; row++)
    {
        //Display Blank
        for(column = 1; column <= num-row; column++)
        {
            printf(" ");
        }
        //Dsiplay increasing number
        for(column = 1; column <= row; column++)
        {
            printf("%d", column);
            sleep(1);
        }
        //Display decreasing number
        for(column = row; column > 1; column)
        {
            column = column - 1;
            printf("%d", column);
            sleep(1);
        }


        printf("\n");
    }
    //Loop back to main
    sleep(6);
    system("CLS");
    return main();
}
