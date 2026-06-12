#include <stdio.h>

int minimum(int a, int b)
{
    if(a < b)
        return a;
    else
        return b;
}

int main()
{
    printf("%d", minimum(15, 25));
    return 0;
}
