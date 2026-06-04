// Write a program to Check whether a number is prime.

#include <stdio.h>
int main()
{
    int num, count = 0, i;
    printf("enter the number : ");
    scanf("%d", &num);

    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            count++;
            break;
        }
    }
    if (num == 1)
        printf("1 is neither prime not composite");
    else if (count == 0)
        printf("%d is prime number", num);
    else
        printf("%d is not a composite number", num);

    return 0;
}