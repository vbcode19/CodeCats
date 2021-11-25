#include<stdio.h>
main()

{
    int a,b,c ,*x,*y;
    printf("enter the value");
    scanf("%d%d",&a,&b);
    printf("a=%d,b=%d",a,b);
    x=&a;
    y=&b;
    c=*x;
    *x=*y;
    *y=c;
    printf("after swapping a=%d,b=%d",a,b);

}
