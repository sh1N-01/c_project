// Online C compiler to run C program online
#include <stdio.h>
int add(int *first, int *second, int *sum)
{
    *sum = *first + *second;
    
    return *sum;
}
int main() {
    //Exercise 1
    printf("Exercise 1\n");
    
    int numbers[5] = {3,5,7,8,90};
    
    for(int i = 0; i < 5; i++)
    {
        *(numbers + i) = numbers[i] * 10;
        printf("%d\n", *(numbers + i));
    }
    
    putchar('\n');
    
    //Exercise 2
    printf("Exercise 2\n");
    
    char str[12] = "Hello World!";
    
    for(int i = 0; i < 12; i++)
    {
        printf("%c - %p\n", *(str + i), &str + i);
    }
    
    putchar('\n');
    
    //Exercise 3
    printf("Exercise 3\n");
    
    int first;
    int second;
    int sum;
    
    printf("Enter first number: ");
    scanf("%d", &first);
    printf("Enter second number: ");
    scanf("%d", &second);
    
    add(&first, &second, &sum);
    printf("Sum of %d and %d is %d\n", first, second, sum);
    
    putchar('\n');
    
    //Exercise 4
    printf("Exercise 4\n");
    
    int arr[3][3] = {{0, 1, 2}, {1, 2, 3}, {2, 3, 4}};
    int *arr2[3][3];
    
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            arr2[i][j] = &arr[i][j];
        }
    }
    
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d", *arr2[i][j]);
        }
        
        putchar('\n');
    }
    
    putchar('\n');
    
    //Exercise 5
    printf("Exercise 5\n");
    
    int numArr[3][3] = {{1000,1001,1002},{2000,2001,2002},{3000,3001,3002}};
    int *numArr1[3][3];
    
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            numArr1[i][j] = &numArr[i][j];
        }
    }
    
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            *numArr1[i][j] = *numArr1[i][j] + 100 ;
        }
    }
    
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            
            printf("%d ", *numArr1[i][j]);
        }
        
        putchar('\n');
    }

}
