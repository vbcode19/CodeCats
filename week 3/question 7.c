#include <stdio.h>
main()
{
    int n, i, j, num, small = 0, large = 0, temp = 0;
    printf("enter the size of the array");
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("1.ASCENDING ORDER\n");
    printf("2.DESCENDING ORDER\n");
    printf("enter the value of choice");
    scanf("%d", &num);

    switch (num)
    {

    case 1:
        for (i = 0; i < n; i++)
        {
            for (j = i + 1; j < n; j++)
            {

                if (arr[i] > arr[j])
                {

                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
            printf("%d\t", arr[i]);
        }

        printf("\nthe largest no in the array:%d\n", arr[n - 1]);
        printf("the smallest no in the array:%d", arr[0]);

        break;
    case 2:
        for (i = 0; i < n; i++)
        {
            for (j = i + 1; j < n; j++)
            {

                if (arr[i] < arr[j])
                {

                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
            printf("%d\t", arr[i]);
        }
        printf("\nthe largest no in the array:%d\n", arr[0]);
        printf("the smallest no in the array:%d", arr[n - 1]);

        break;

    default:
        printf("invalid number");
    }
}
