#include<stdio.h>
#include<math.h>
main(){
	int a,b,c;
	float D,D1,Root1=0,Root2=0;
	printf("enter the no values");
	scanf("%d%d%d",&a,&b,&c);
	printf("the quadratic equation whose roots is to be find :%d(x square)+%d(x)+%d(constant)\n",a,b,c);
	D=b*b-4*a*c;
	printf("the discriminant of the equation is :%f\n",D);
	
	D1=  sqrt ( D);
	printf("the sqaure root of the discriminant is :%f\n",D1);

	Root1=(-b+D1)/2*a;
	printf("the first root of the equation is :%f\n",Root1);
	
	Root2=(-b-D1)/2*a; 
	printf("the second root of the equation is :%f\n",Root2);
}