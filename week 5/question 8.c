#include <stdio.h>
main()
{
    int n, i, *x, pos = 0, neg = 0, zero = 0;
    printf("enter the number");
    scanf("%d", &n);
    int arr[n];
    x = arr;
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < n; i++)
    {
        if (*x > 0)
            pos++;
        if (*x < 0)
            neg++;
        if (*x == 0)
            zero++;
            x++;
    }
    printf("the positive numbers are %d\n", pos);
    printf("the negative numbers are %d\n", neg);
    printf("the zero numbers are %d\n", zero);
}