// Write a program to Find x^n without pow().

#include <stdio.h>
int main()
{
    int num, power, i, result = 1;
    printf("enter the number:");
    scanf("%d", &num);
    printf("enter the power:");
    scanf("%d", &power);

    for (i = 0; i < power; i++)
    {
        result = result * num;
    }
    printf("%d raise to power %d is %d", num, power, result);

    return 0;
}