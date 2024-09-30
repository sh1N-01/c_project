#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<unistd.h>
#include<windows.h>

int main()
{

    SetConsoleTitle("Multiplication Table");

    int column, num, factor;
    //Ask user input
    printf("What Multiplication Table Number do you want to see? : ");
    scanf("%d", &num);
    //Print Output
    printf("\nMultiplication Table of %d:\n", num);
    printf("===============\n");
    //Print Loop Condition
    for (int multiplicand = 0; multiplicand <= 10; multiplicand++)
    {
        factor = num * multiplicand;
        printf("%d x %d = %d\n", num, multiplicand, factor);
        sleep(1);
    }

    printf("===============");

    sleep(5);
    system("CLS");
    return main();
}