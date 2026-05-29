// Write a program to Find sum of digits of a number.

#include <stdio.h>
int main()
{
int num,remainder,sum=0;
printf("enter the number : ");
scanf("%d",&num);

while (num > 0){
    remainder = num%10;
    sum = sum + remainder;
    num = num/10;
}
printf("sum of the digit of %d is %d",num,sum);

    return 0;
}