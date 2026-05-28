// Write a program to Calculate sum of first N natural numbers.

#include <stdio.h>
int main()
{
    int num, i, sum = 0;
    printf("enter the number : ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        sum = sum + i;
    }
    printf("sum of %d natural numbers is %d", num, sum);

    return 0;
}