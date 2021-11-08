#include <stdio.h>  
 main()  
{  
    int k ,i,j,n,m;  
    printf("Enter the number of rows");  
    scanf("%d",&n);  
      
   for( i=1;i<=n;i++)  
   {  
       for( j=1;j<=n;j++)  
       {  
           printf(" ");  
       }  
       for( k=1;k<=2*i-1;k++)  
       {  
         printf("*");  
       }  
       n--;  
     
      printf("\n");  
    }  
   
}  