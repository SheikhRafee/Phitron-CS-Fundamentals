#include<stdio.h>

int main()
{
    int i = 1; //* for while loop Initialize the variable i to 1
    while(i <= 10) //* while loop condition to check if i is less than or equal to 10
    {
        printf("%d\n", i);
        i++; //* Increment the value of i by 1 after each iteration
    }
    return 0;
}