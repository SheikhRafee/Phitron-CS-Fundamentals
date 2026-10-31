#include<stdio.h>

int main()
{
    int i = 1;
    do
    {
        printf("%d\n", i);
        i++;
    }while(i <= 10); //* do-while loop condition to check if i is less than or equal to 10

    printf("\n");

    int j = 100;
    do
    {
        printf("%d\n", j);
        printf("Only one iteration will be executed since j starts at 100\n");
        j++;
    }while(j <= 10); //* do-while loop condition to check if j is less than or equal to 10, but since j starts at 100, this loop will not execute

    return 0;
}