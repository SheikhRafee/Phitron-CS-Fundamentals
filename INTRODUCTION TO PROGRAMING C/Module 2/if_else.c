#include<stdio.h>

int main()
{
    int tk;
    printf("Enter how much money I have: ");
    scanf("%d", &tk);

    if(tk >= 100)
    {
        printf("I can buy a burger.\n");
    }
    else if(tk >= 50)
    {
        printf("I can buy a fuchka.\n");
    }
    else if(tk >= 20)
    {
        printf("I can buy a samosa.\n");
    }
    else if(tk >= 10)
    {
        printf("I can buy a biscuit.\n");
    }
    else
    {
        printf("I cannot eat anything.\n");
    }

    return 0;
}