#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if(n >= 0 && n <= 100)
    {
        n = n + 5;
        printf("%d\n", n);
    }
    
    return 0;
}