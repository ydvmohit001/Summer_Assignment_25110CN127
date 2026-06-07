// Write a program to Recursive Fibonacci. 

#include<stdio.h>

    int fib (int num){
        if  ( num<=2) return 1;
        return fib (num-1)+fib(num-2);
    }
int main (){
     int num,faboncci;
     printf("enter the number:");
     scanf("%d",&num);
    faboncci=fib(num);
     printf("%dth term is %d",num,faboncci);
    return 0;

}