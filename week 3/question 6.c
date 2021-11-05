#include <stdio.h>
main()
{
    int n, i, num, count = 0;
    printf("enter the size of the array");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)

        scanf("%d", &arr[i]);

    for (i = 0; i < n; i++)
        printf("%d\t", arr[i]);

    printf("\nenter the number for which user checked for the occurence");
    scanf("%d", &num);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            count++;
        }
    }
    printf("the no of the elements is %d", count);
}