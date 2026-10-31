#include<stdio.h>

int main()
{
    for(int i = 1; i >= 1; i++) //* This is an infinite loop because the condition i >= 1 will always be true as i starts from 1 and keeps increasing
    {
        printf("%d ", i);
    }
    return 0;
}