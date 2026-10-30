#include<stdio.h>

int main()
{
    int n;
    int sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        printf(" %d + %d = %d\n", i, sum, sum + i); // 1st %d is the current number, 2nd %d is the current sum, 3rd %d is the new sum after adding the current number
        sum = sum + i;
    }
    printf("Final sum of first %d natural numbers is: %d\n", n, sum);
    return 0;
}