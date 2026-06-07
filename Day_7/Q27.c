// Write a program to Recursive sum of digits. 

#include<stdio.h>
 int sumOfDigit(int num)
 {
    if(num==0) return 0;
    return (num%10)+sumOfDigit(num/10);
 }
 int main (){
    int num;
    printf("enter the nunmber :");
    scanf("%d",&num);
    int sum = sumOfDigit(num);
    printf("sum of digit is %d", sum);
   
    return 0;
 }