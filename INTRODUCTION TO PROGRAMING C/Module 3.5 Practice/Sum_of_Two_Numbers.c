/* Sum of Two Numbers

Statement:
take two integers A & B as input and out their summation.

constrains:
1. -10^9 <= A, B <= 10^9

Input Format
- Your will be given A and B separated by a space.

output format:
output their summation

Sample Input 1
2 3

Sample Output 1
5

Sample input 2
-10 5

sample output 2
-5

*/


#include<stdio.h>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    int sum = 0;

    sum = a + b;

    printf("%d", sum);

    return 0;
}