#include <stdio.h>

int power(int base, int exp)
{
    int result = 1;

    for(int i = 1; i <= exp; i++)
    {
        result = result * base;
    }

    return result;
}

int main()
{
    printf("%d", power(2, 5));
    return 0;
}
