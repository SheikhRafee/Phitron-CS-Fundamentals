#include <stdio.h>
#include <stdbool.h> // Include the bool type and true/false constants

int main()
{
    bool b, c;
    b = true; // Assigning the value true to the boolean variable b
    c = false; // Assigning the value false to the boolean variable c

    printf("%d\n", b); // %d is the format specifier for integers. It will print 1 (true)
    printf("%d\n", c); // %d is the format specifier for integers. It will print 0 (false)
}