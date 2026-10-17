#include<stdio.h>

int main()
{
    float x;
    scanf("%f", &x);

    if(x >= 0 && x <= 150)
    {
        printf("%.3f\n", x);
    }
    
    return 0;
}