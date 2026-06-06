// Write a program to Count set bits in a number.

#include <stdio.h>
int main (){
    int num, count=0;
    printf("enter the number : ");
    scanf("%d",&num);
    while (num>0){
        if (num%2==1){
            count=count+1;
          
        }
          num=num/2;
    }
    printf("Set bits = %d",count);
    return 0;
}