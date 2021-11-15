#include<stdio.h>
main()
{
    int arr[9]={1,0,0,1,2,1,2,0,1};
    int i,j,temp;
    for ( i = 0; i <9; i++)
    {
       for ( j = i+1; j < 9; j++)
       {
           if(arr[i]>arr[j])
           {
               temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
           }
       }
       printf("%d\t",arr[i]);
       
    }
    
}