#include <stdio.h>
main()

{

    int num, num1, rem, sum = 0;
    printf("enter the number");
    scanf("%d", &num);

    while (num >= 1)
    {
        num1 = num / 5;
        sum = sum + num1;

        num = num1;
    }
    printf("the no of zeroes:%d", sum);

  
}
