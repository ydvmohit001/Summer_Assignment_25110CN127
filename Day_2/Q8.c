// Write a program to Check whether a number is palindrome.

#include <stdio.h>
int main()
{
int num,reverse=0,remainder;
printf("enter the number : ");
scanf("%d",&num);

int num1 = num;

while (num>0)
{
    remainder = num%10;
    reverse = 10*reverse + remainder;
    num = num/10;
}

if (reverse == num1)
    printf("%d is palindrome",num1);
else
    printf("%d is not palindrome",num1);

    return 0;
}