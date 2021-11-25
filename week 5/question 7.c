#include <stdio.h>
main()
{
    int n;
    printf("enter the value of n");
    scanf("%d", &n);
    int *x, i, find,count=0;
    int arr[n];
    x = arr;

    printf("enter the value");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("enter the no you want to search");
    scanf("%d", &find);
    for (i = 0; i < 5; i++)
    {
        if (*x == find)
         {   count++;}
        x++;
    }
    if (count > 0)
        printf("the no is in the array");
    if(count==0)
    printf("the no is not in the array");
}