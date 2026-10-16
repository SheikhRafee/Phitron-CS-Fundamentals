#include<stdio.h>

int main()
{
    int a = 10000000000; // This line will cause an integer overflow because the value exceeds the range of int type in C. The maximum value for a signed int is typically 2147483647 on most systems.
    printf("garbage value:%d\n", a);

    long long int b = 10000000000; // Using long long int type to store a larger integer value. The maximum value for a signed long long is typically 9223372036854775807 on most systems.
    printf("large value:%lld\n", b);

    float f = 23164.5678923; // This line initializes a float variable with a large decimal value. The precision of float is limited, and it may not accurately represent very large or very small numbers.
    printf("float value:%f\n", f);

    double d = 14534.567892; // Using double type for higher precision floating-point representation. The maximum value for a double is typically around 1.7E+308 on most systems.
    printf("double value:%lf\n", d);

}