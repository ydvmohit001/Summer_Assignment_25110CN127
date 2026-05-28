// Write a program to Count digits in a number.

#include <stdio.h>
int main()
{
    int num, num1, count = 0;
    printf("enter the number : ");
    scanf("%d", &num);
    num1 = num;

    while (num > 0)
    {
        num = num / 10;
        count++;
    }
    printf("number of digit in %d is %d.", num1, count);

    return 0;
}