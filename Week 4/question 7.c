#include<stdio.h>
main()
{
    int x,n;
    printf("enter the initial value of grasshoper");
    scanf("%d",&x);
    printf("enter the value of n");
    scanf("%d",&n);
    if(n%4 == 0)
    printf("the position of the grasshoper is:%d",x);
    else if(n%4==1)
    printf("the position of the grasshoper is:%d",x-n);
     else if(n%4==2)
    printf("the position of the grasshoper is: %d",x+1);
     else if(n%4==3)
    printf("the position of the grasshoper is:%d",x+4);
    else
    printf("invalid number");

}