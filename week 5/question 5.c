#include <stdio.h>
main()
{
    int n;
    printf("enter the value of n");
    scanf("%d", &n);
    int *x,i ;
    int arr[n];
 
    printf("enter the value");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
     x = &arr[n-1];
     for ( i = 0; i < n; i++)
     {
        printf("%d\n",*x);
        x--;
     }
     
    
}