#include<stdio.h> 
#include<stdlib.h> 
#include<windows.h> 
#include<unistd.h>

int main()
{
    fflush(stdout);

    SetConsoleTitle("Fibonacci Sequence");
    //Ask user input
    unsigned long long fibonacci, fibo1, fibo0;
    int num; 
    fibonacci = 0;
    fibo1 = 0;
    fibo0 = 1;
    printf("Enter the desired nth term for Fibonacci: ");
    scanf("%d", &num);
    //Fibonnaci computation
    for(int i = 1; i <= num; i++)
    {
        //Updating output
        printf("%d.) %llu\n", i, fibonacci);

        fibonacci = fibo1 + fibo0;
        fibo0 = fibo1;
        fibo1 = fibonacci;
    }

    sleep(5);
    system("CLS");
    return main();
}
