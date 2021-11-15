#include <stdio.h>
main()
{
    int n, i, j, count;
    printf("enter the value");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
        printf("%d No of times %d\n", arr[i], count);
        count = 0;
    }
}