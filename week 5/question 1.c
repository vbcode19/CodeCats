#include<stdio.h>
main()
{
    int a,b,c;
    printf("enter the numbers");
    scanf("%d%d",&a,&b);
    int *x,*y,*z;
    x=&a;
    y=&b;
    z=&c;
    *z=*x+*y;
    printf("%d",c);
}
