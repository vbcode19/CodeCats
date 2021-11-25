#include <stdio.h>
main()
{
    int n;
    printf("enter the value of n");
    scanf("%d", &n);
    int *x,i, sum = 0;
    int arr[n];
    x = &arr;
    printf("enter the value");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + *x;
        x++;
    }
    printf("the sum of the values is %d",sum);
}