#include<stdio.h>

int main()
{
    int budget;
    printf("Enter your budget: ");
    scanf("%d", &budget);

    if(budget >= 5000)
    {
        printf("We will go to Cox's Bazar.\n");

        if(budget >= 10000)
        {
            printf("We will go to Saint Martin's Island.\n");
        }
        else
        {
            printf("Than, we will return home.\n");
        }        
    }
    else
    {
        printf("We won't go anywhere.\n");
    }


    return 0;
}