#include<stdio.h>
main()
{
    int phy,chem,bio,maths,comp,sum;
    float per;
    printf("enter the marks of subjects");
    scanf("%d%d",&phy,&chem);
    scanf("%d%d%d",&bio,&maths,&comp);
    sum=phy+chem+bio+maths+comp;
    printf("the sum of the all marks:%d\n",sum);
    per=sum/5;
    printf("the percentage of all the subjects :%f\n",per);
    if (per>=90)
    {
       printf("GRADE =A");
    }
    else if (per>=80)
    {
         printf("GRADE =B");
    }
    else if (per>=70)
    {
         printf("GRADE =C");
    }
    else if(per>=60)
    {
         printf("GRADE=D");
    }
    else
    {
         printf("GRADE =E");
    }
    
}