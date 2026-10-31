#include<stdio.h>

int main()
{
    for(int i = 100; i >= 1; i--) //* This is a loop that will print all the odd numbers from 100 to 1 in descending order
    {
        if(i % 2 != 0) //* This condition checks if the number is odd by checking if the remainder when divided by 2 is not equal to 0
        {
            printf("%d ", i); //* If the number is odd, it will be printed
        }
    }
    return 0;
}