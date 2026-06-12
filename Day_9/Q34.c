#include <stdio.h>
int main()
{
    int j, i, num;
    printf("enter the  number : ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= num + 1 - i; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}