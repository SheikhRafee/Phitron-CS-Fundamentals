#include<stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num % 2 == 0) //* % is the modulus operator that gives the remainder of the division of num by 2. If the remainder is 0, then num is even.
    {
        printf("%d is an even number.\n", num);
    }
    else
    {
        printf("%d is an odd number.\n", num);
    }
    return 0;
}