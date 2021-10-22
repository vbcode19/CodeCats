#include<stdio.h>
 main()
 
{   
    int amount,p,a,b,c,d,e,f,g,h,i,j,m_notes; 
	printf("Category  no of denomination of notes:\n1\n2\n5\n10\n20\n50\n100\n200\n500\n2000\n");
    printf("enter the no of amount");
    scanf("%d",&amount);
    if(amount>0)
    {
    	a=amount/2000;
    	amount=amount-a*2000;
    	  
    	b=amount/500;
    	amount=amount-b*500;
    	
    	c=amount/200;
    	amount=amount-c*200;
    	
    	d=amount/100;
    	amount=amount-d*100;
    	
    	e=amount/50;
    	amount=amount-e*50;
    	
    	f=amount/20;
    	amount=amount-f*20;
    	
    	g=amount/10;
    	amount=amount-g*10;
    	
    	h=amount/5;
    	amount=amount-h*5;
    	
    	i=amount/2;
    	amount=amount-i*2;
    	
    	j=amount/1;
    	
    	m_notes=a+b+c+d+e+f+g+h+i+j;
    	printf("the minimum of no of notes in particualar amount:%d",m_notes);
	}
    
}