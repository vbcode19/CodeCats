#include<stdio.h>
main()
{
    int Bas_salary;
    float hra,da,gross_salary;
    printf("enter the basic salary");
    scanf("%d",&Bas_salary);
    if(Bas_salary>0)
    {
       if(Bas_salary<=10000) 
       {
            hra=0.2*Bas_salary;
            da=0.8*Bas_salary;
            gross_salary=Bas_salary+hra+da;
            printf("the gross salary of the person is :%f",gross_salary);
       }
       if(Bas_salary<=20000) 
       {
            hra=0.25*Bas_salary;
            da=0.9*Bas_salary;
            gross_salary=Bas_salary+hra+da;
            printf("the gross salary of the person is :%f",gross_salary);
       }
       if(Bas_salary>20000) 
       {
            hra=0.3*Bas_salary;
            da=0.95*Bas_salary;
            gross_salary=Bas_salary+hra+da;
            printf("the gross salary of the person is :%f",gross_salary);
       }
    }
    else
    {
        printf("invalid entry");
    }

}