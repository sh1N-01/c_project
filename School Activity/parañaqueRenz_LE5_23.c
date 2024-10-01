/*
============================================================================
FILE : parañaqueRenz_LE5_23.c
AUTHOR : Renz Joseph P. Para�aque
DESCRIPTION : Fibonacci Series. Create a program that will display the 1-N 
value of the Fibonacci sequence. Use a space for the spacing between numbers horizontally.
COPYRIGHT : Renz Joseph P. Para�aque
REVISION HISTORY
Date: 10.01.2024 Time: 8:29 P.M.
============================================================================
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<windows.h>
#include<unistd.h>

int main()
{
    //Intiliaze variables
    int nth; 
    unsigned long long fibonacci, fibo0, fibo1;
    fibonacci = 1;
    fibo0 = 0;
    fibo1 = 1;

    SetConsoleTitle("Fibonacci Sequence");
    //Ask user input
    printf("Enter nth value of the Fibonacci you want to know: ");
    scanf("%d", &nth);
    //Stylish Output... Sorry
    printf("\n%dth term of the Fibonacci Sequence: = ", nth);
    //Repeating loop to get Fibonacci
    for(int i = 1; i <= nth; i++)
    {
        printf("%llu ", fibonacci);
        fibonacci = fibo0 + fibo1;
        fibo0 = fibo1;
        fibo1 = fibonacci;
        sleep(1);
    }

    printf("=");
    //Loop back to main()
    sleep (6);
    system("CLS");
    return main();
}
