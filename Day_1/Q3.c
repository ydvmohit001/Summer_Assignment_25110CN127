// Write a program to Find factorial of a number.

#include <stdio.h>
int main()
{
int num, i , factorial=1;
printf("enter the number : ");
scanf("%d",&num);

for (i=1;i<=num;i++){
    factorial = factorial*i;
}
printf("factorial of %d is %d",num,factorial);


    return 0;
}