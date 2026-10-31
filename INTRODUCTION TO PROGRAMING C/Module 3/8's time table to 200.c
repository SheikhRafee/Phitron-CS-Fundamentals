#include<stdio.h>

int main()
{
    int limit = 200;
    for(int i = 1; 8 * i <= limit; i++) //* 8*i <= limit, this condition is true until the multiplication reaches 200
    {
        printf("8 x %d = %d\n", i, 8 * i); //* prints each time table
    }
    return 0;
}