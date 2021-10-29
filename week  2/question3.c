#include<stdio.h>
main()
{
    int num,num1,rem,result=0,sum=0,num2;
    printf("enter the number");
    scanf("%d",&num);
    num2=num;

    while(num>=1)
    {
        rem=num%10;
        result=rem*rem*rem;
        sum=sum+result;
        num1=num/10;
        num=num1;
    }
    if(sum == num2 )
        printf("It is an armstrong number");
        else
        printf("It is not an armstrong number");
    
}