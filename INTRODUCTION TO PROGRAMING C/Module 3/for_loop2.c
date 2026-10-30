#include<stdio.h>

int main()
{
    for(int i = 4; i <= 100; i = i + 4)
    {
        printf("%d\n", i);
    }

    printf("\n\n");

    for(int j = 100; j >= 1; j -= 2)
    {
        printf("%d\n", j);
    }

    return 0;
}