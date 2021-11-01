#include <stdio.h>
main()
{
    int n;
    int i, sum = 0;
    int sum_odd = 0, sum_even = 0;
    printf("enter the no ");
    scanf("%d",&n);
    int arr[n];
    for (i = 1; i <= n; i++)

        scanf("%d", &arr[i]);
    for (i = 1; i <= n; i++)

        printf("%d\t", arr[i]);

    for (i = 1; i <= n; i++)

        sum = sum + arr[i];

    printf("the sum of the elements in the array :%d\n", sum);

    for (i = 1; i <= n; i += 2)

        sum_odd = sum_odd + arr[i];
    printf("the sum of the odd position of the numbers in the array :%d\n", sum_odd);

    for (i = 2; i <= n; i += 2)
        sum_even = sum_even + arr[i];
    printf("the sum of the even position of the numbers in the array:%d\n", sum_even);
}