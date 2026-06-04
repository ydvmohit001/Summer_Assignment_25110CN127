// Write a program to Find nth Fibonacci term. 

// Write a program to Generate Fibonacci series. 

#include <stdio.h>
int main()
{
int term , i , num1 , num2 , sum = 0;
printf("enter the number of terms : ");
scanf("%d",&term);
printf("enter the first and second number : \n");
scanf("%d%d",&num1,&num2);

for (i=1; i<=term-2; i++){
    sum = num1 + num2;
    num1 = num2;
    num2 = sum;
}
printf("the %dth term of fibonacci is %d",term,sum);

    return 0;
}