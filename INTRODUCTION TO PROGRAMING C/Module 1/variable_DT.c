#include<stdio.h>

int main()
{
    int num1; // creates a variable named num1 of type int (integer). Also known as declaring a variable. The variable is created in the stack memory. it takes 4 bytes of memory in the stack memory.

    num1 = 10; //in that memory is assigning value.

    float num2 = 20.5; // creates a variable named num2 of type float (floating point number) and assigns the value 20.5 to it. it takes 4 bytes of memory in the stack memory.

    char ch = 'A'; // creates a variable named ch of type char (character) and assigns the value 'A' to it. it takes 1 byte of memory in the stack memory.

    printf("%d\n", num1); // %d is the format specifier for integers. it will print 10
    printf("%f\n", num2); // %f is the format specifier for floating-point numbers. it will print 20.5
    printf("%.2f\n", num2); // %.2f is the format specifier for floating-point numbers with 2 decimal places. it will print 20.50
    printf("%c\n", ch); // %c is the format specifier for characters. it will print A

    return 0;
}