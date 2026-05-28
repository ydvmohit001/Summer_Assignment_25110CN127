// Write a program to Print multiplication table of a given number. 

#include <stdio.h>
int main()
{
int num , i , table;
printf("enter a number : ");
scanf("%d",&num);

for (i=1;i<=10;i++){
    table = num * i;
    printf("%d * %d = %d\n",num,i,table);
}


    return 0;
}