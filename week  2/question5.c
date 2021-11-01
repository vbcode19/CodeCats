#include <stdio.h>
main()
{
    int num, rem, sum = 0;
    printf("enter the number");
    scanf("%d", &num);
    while (num >= 1)
    {
        rem = num % 10;
        num = num / 10;
        sum = sum * 10 + rem;
    }
    printf("the reverse order of a number is:%d", sum);
}