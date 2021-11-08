#include <stdio.h>
main()
{
    int i, n, m, count_h = 0, count_t = 0,num;
    printf("enter the number");
    scanf("%d",&n);
    char arr[n];
    printf("1.all are head\n");
    printf("2.all are tail\n");
    printf("enter the num");
    scanf("%d",&num);
    switch (num)
    {
    case 1:
        for (i = 0; i < n; i++)
        {
            arr[i] = 'H';
        }
        printf("enter the value of the variable for which interchange head or tail");
        scanf("%d", &m);
        for (i = 0; i < m; i+=2)
        {
            arr[i] = 'T';
        }
        for (i = 0; i < n; i ++)
        {
            if (arr[i] == 'H')
            {
                count_h++;
            }
            if (arr[i] == 'T')
            {
                count_t++;
            }
            printf("%c\n",arr[i]);
        }
        printf("the no of heads in the array:%d\n", count_h);
        printf("the no of tails in the array :%d\n", count_t);
        break;
    case 2:
        for (i = 0; i < n; i++)
        {
            arr[i] = 'T';
        }
        printf("enter the value of the variable for which interchange head or tail");
        scanf("%d", &m);
        for (i = 0; i < m; i += 2)
        {
            arr[i] = 'H';
        }
        for (i = 0; i < n; i++)
        {
            if (arr[i] == 'T')
            {
                count_t++;
            }
            if (arr[i] == 'H')
            {
                count_h++;
            }
             printf("%c\n",arr[i]);
        }
        printf("the no of heads in the array:%d\n", count_h);
        printf("the no of tails in the array:%d\n", count_t);
        break;

        default :
        printf("invalid character");
    }
}