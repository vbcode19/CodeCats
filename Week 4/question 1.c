#include <stdio.h>
main()
{
    int n, i;
    printf("enter the value of n");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (i = n - 1; i >= 0; i--)
        printf("%d\t", arr[i]);
}