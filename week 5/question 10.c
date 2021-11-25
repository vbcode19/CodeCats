#include <stdio.h>
main()
{
    int count  , count1 = 0;

    char str[10], *x;
    printf("enter the string");

    gets(str);
    x = str;
    while (*x!='\0')
    {
        if (*x =='A' || 'E' || 'I' || 'O' || 'U' || 'a' || 'e' || 'i' || 'o' || 'u')
            count++;
        else
           { count1++;}
        x++;
    }
    printf("the no of the vowels in the string is %d\n", count);
    printf("the no of the constant in the string is %d", count1);
}
