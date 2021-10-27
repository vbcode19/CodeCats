#include <stdio.h>
main()
{
    int n, arr[100];
    int i, sum = 0;
    int sum_odd = 0, sum_even = 0;
    printf("enter the no for which you have to show natural numbers");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)

        arr[i] = i;
    for (i = 1; i <= n; i++)                                        //display of natural numbers

        printf("%d\n", arr[i]);

    for (i = 1; i <= n; i++)

        sum = sum + arr[i];

    printf("the sum of the natural numbers in the list :%d\n", sum); //sum of all natural numbers

    for (i = 1; i <= n; i += 2)                                      //sum of odd number

        sum_odd = sum_odd + arr[i];
    printf("the sum of the odd numbers :%d\n", sum_odd);

    for (i = 2; i <= n; i += 2)                                      //sum of even number
        sum_even = sum_even + arr[i];
    printf("the sum of the even numbers is:%d\n", sum_even);
}
