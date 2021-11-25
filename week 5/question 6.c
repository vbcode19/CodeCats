#include <stdio.h>
main()
{
    int n;
    printf("enter the value of n");
    scanf("%d", &n);
    int *x, i,max=-32765,min=32764;
int arr[n];
x=arr;

printf("enter the value");
    for (i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        if(*x>max)
        max=*x;
        if(*x<min)
        min=*x;
        x++;
    }
    printf("the maximum value is %d",max);
    printf("the maximum value is %d",min);
}