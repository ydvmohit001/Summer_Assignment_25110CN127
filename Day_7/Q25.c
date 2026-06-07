// Write a program to Recursive factorial. 

#include<stdio.h>

    int factorial(int num)
    {
        if (num==0 || num==1) return 1;
        return num*factorial(num-1);
    }
    int main ()
    {
        int num,fact;
        printf("enter the number:");
        scanf("%d",&num);
        fact=factorial(num);
        printf("Factorial of %d is %d",num,fact);
    
    return 0;

}