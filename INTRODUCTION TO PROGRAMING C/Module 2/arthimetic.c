#include<stdio.h>

int main()
{
    float a, b, sum;

    a = 10;
    b = 20;
    sum = a + b;
    printf("Summation: %f\n", sum);

    float sub;
    sub = b - a;
    printf("Subtraction: %f\n", sub);

    float mul;
    mul = a * b;
    printf("Multiplication: %f\n", mul);

    float div;
    div = b / a;
    printf("Division: %f\n", div);

    int c, d, mod;
    c = 10;
    d = 3;
    mod = c % d; // Modulus operator to find the remainder
    printf("Modulus: %d\n", mod);

    return 0;

}