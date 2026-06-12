#include <stdio.h>

float divide(int a, int b)
{
    return (float)a / b;
}

int main()
{
    printf("%.2f", divide(20, 4));
    return 0;
}
