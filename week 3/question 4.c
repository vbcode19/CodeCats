#include <stdio.h>
main()
{
    int n, m, i, j;
    printf("Enter the number");
    scanf("%d", &m);
    n = 2 * m - 1;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == j || j == (n - i + 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}