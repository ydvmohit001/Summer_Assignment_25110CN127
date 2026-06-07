// Write a program to Recursive reverse number. 

#include <stdio.h>
int rev=0;
int reverse(int num)
{
    if (num==0) return rev;
rev=rev*10+num%10;
return reverse(num/10);
}
int main (){
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    printf("reverse of number is %d",reverse(num));
    return 0;
}