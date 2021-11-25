#include <stdio.h>
main()
{
    char str[10] = "VARUN";
    int count = 0;
    char *x;
    x = str;
    while (*x != '\0')
    {
        count++;
        x++;
    }
    printf("the no words in the string %d", count);
    
}