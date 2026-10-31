#include<stdio.h>

int main()
{ //for loop
    
    for(int i = 1; i <= 100; i++) //for loop will start from 1 and will run until 3
    {
        // i is the loop control variable which will be incremented by 1 after each iteration
        // i <= 3 is the condition which will be checked before each iteration, if it is true then the loop will continue otherwise it will terminate
        // i++ is the increment operator which will increase the value of i by 1 after each iteration
        printf("%d.Understanding for loop in C\n", i);
    }

    for(int j = 5; j <= 10; j++) //* incrementing j from 5 to 10 and printing "hi" in each iteration
    {
        printf("hi\n");
        j++; //* incrementing again, so j will be incremented by 2 in each iteration
    }
    
    return 0;


}