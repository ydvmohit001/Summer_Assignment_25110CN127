#include <stdio.h>
int main()
{
    int num, i, j, k;
    printf("enter the number : ");
    scanf("%d", &num);
    int nst = 1;
    for (i = 1; i <= num; i++)
    {
        for (k = 1; k <= num - i; k++)
        {
            printf(" ");
        }
        for (j = 1; j <= nst; j++)
        {
            printf("*");
        }
        nst = nst + 2;
        printf("\n");
    }
    return 0;
}