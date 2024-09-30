#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<unistd.h>
#include<windows.h>

int main()
{
    SetConsoleTitle("Number Tower");

    int row, column, num;
    printf("How tall do you want your tower? : ");
    scanf("%d", &num);
    //Number Triangle
    for(row = 1; row <= num; row++)
    {
        //Print spaces
        for(column = 1; column <= num - row; column++)
        {
            printf(" ");
        }
        //Print Increasing number
        for(column = 1; column <= row; column++) 
        {
            printf("%d", column);
        }
        //Print decreasing number
        for(column = row; column > 1; column) 
        {
            column = column - 1;
            printf("%d", column);
        }

        printf("\n");
    }

    sleep(5);
    system("CLS");
    return main();
}