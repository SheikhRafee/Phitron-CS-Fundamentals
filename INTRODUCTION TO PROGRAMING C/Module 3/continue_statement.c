#include<stdio.h>

int main()
{
    for(int i = 1; i <= 10; i++)
    {
        if(i == 5)
        {
            continue; //* Continue is used to skip the current iteration when the current number is 5
        }
        printf("%d", i);
        printf(" Hello\n"); //* skipping all the statements after continue for the current iteration
    }

    return 0;
}