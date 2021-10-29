#include <stdio.h>
main()
{

    int num, count = 0, i;
    printf("enter the  number");
    scanf("%d", &num);
    for (i = 1; i <=num; i++)
    {
        if (num % i == 0)
            count++;
    }
    if (count == 2)

        printf("it is a prime number");
    else
        printf("it is not a prime number");
}
