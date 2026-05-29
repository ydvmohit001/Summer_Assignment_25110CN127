// Write a program to Reverse a number. 

#include <stdio.h>
int main()
{
int num,remainder,reverse=0;
printf("enter the number : ");
scanf("%d",&num);

int num1 = num;

while (num > 0){
    remainder = num%10;
    reverse = 10*reverse + remainder;
    num = num/10;
}
printf("the reverse of %d is %d",num1,reverse);

    return 0;
}