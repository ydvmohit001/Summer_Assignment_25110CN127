#include <stdio.h>
int main()
{
    int num;
    printf("enter the number : ");
    scanf("%d", &num);
    for (int i = 0; i <= num; i++)
    {
        for (int j = 1; j <= num - i; j++)
        {
            printf("  ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("%c ", 'A' + j);
        }
        for (int j = i - 1; j >= 0; j--)
        {
            printf("%c ", 'A' + j);
        }
        printf("\n");
    }
    return 0;
}