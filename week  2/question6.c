#include <stdio.h>
main()
{
    int i, base, power, result = 1;
    printf("enter the value of base and power");
    scanf("%d%d", &base, &power);
    for (i = 1; i <= power; i += 1)
    {
        result = result * base;
    }
    printf("the power of a number:%d", result);
}