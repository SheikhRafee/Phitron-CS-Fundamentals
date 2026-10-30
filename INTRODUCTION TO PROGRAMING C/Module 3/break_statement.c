#include<stdio.h>

int main()
{
    for(int i = 1; i <= 10; i++)
    {
        if(i == 5)
        {
            break; //* Break is used to exit the loop when the current number is 5
        }
        printf("%d\n", i);
    }

    return 0;
}