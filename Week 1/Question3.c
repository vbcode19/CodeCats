#include<stdio.h>
main()
{
    int num1,num2,num3;
    printf("enter the value of numbers");
    scanf("%d%d%d",&num1,&num2,&num3);
    if (num1>num2&&num1>num3)
    {
        printf("num1 is maximum");
    }
    else if (num2>num3)
    {
        printf("num2 is maximum");
    }
    else{
        printf("num3 is maximum");
    }
    
    
}