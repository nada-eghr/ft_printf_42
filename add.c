#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int sum(int count, ...)
{
    va_list args;
    va_start(args , count);

    int s = 0;
    int i;
    i = 0;
    while (i < count)
    {
        int x = va_arg(args, int);
        s += x;
        i++;
    }
    va_end (args);
    return s;
}

int main()
{
    printf("sum is : %d\n",sum(3,1,2,3));
    return 0;
}