#include <stdio.h>
int main()
{
    int i, j, num;
    printf("enter the number : ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        int alpha = 1;
        for (j = 1; j <= i; j++)
        {
            printf("%c ", alpha + 64);
            alpha++;
        }
        printf("\n");
    }
    return 0;
}