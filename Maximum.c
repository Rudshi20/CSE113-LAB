#include <stdio.h>

int maximum(int a, int b)
{
    if(a > b)
        return a;
    else
        return b;
}

int main()
{
    printf("%d", maximum(15, 25));
    return 0;
}
