#include<stdio.h>
main()
{
    int num,*x,result=1;
    printf("enter the number");
    scanf("%d",&num);
    x=&num;
    while(num>0)
    {
        result=result * (*x);
          num--;
    }
    printf("the factorial of the number is :%d",result);
}