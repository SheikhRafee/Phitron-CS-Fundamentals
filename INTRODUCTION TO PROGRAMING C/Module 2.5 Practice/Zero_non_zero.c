#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n == 0)
    {
        printf("Zero.\n");
    }
    else
    {
        printf("Non Zero.\n");
    }

    return 0;
}