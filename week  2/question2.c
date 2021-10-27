#include<stdio.h>
main()
{   
    int num,fact=0;
    printf("enter the number" );
    scanf("%d",&num);                         //entering a value from the user
    fact=num;
    while(num>1)
    {
        fact=fact*(num-1);
        num-=1;
    }
  
    printf("The factorial of the number is:%d\n",fact);       //shows factorial of a number
}