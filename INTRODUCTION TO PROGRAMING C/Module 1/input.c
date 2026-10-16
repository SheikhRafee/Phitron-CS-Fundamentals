#include<stdio.h>

int main()
{
    int a;
    float f;
    char c;
    scanf("%d", &a); // Read an integer from user input and store it in variable a. here &a is the address of variable a, which is passed to scanf to store the input value at that memory location.
    printf("%d\n", a);

    scanf("%f %c", &f, &c);
    printf("%f %c\n", f, c); // Read a float and a character from user input and store them in variables f and c respectively. here &f and &c are the addresses of variables f and c, which are passed to scanf to store the input values at those memory locations.
    
    return 0;
}