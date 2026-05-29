// Write a program to Find product of digits. 

#include <stdio.h>
int main()
{
int num,remainder,product=1;
printf("enter a number : ");
scanf("%d",&num);

int num1 = num;

while (num > 0)
{
    remainder = num%10;
    product = product*remainder;
    num = num/10;
}
printf("product of digit of %d is %d",num1,product);

    return 0;
}