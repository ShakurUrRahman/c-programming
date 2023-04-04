#include <stdio.h>
int main()
{
    float a, b;
    scanf("%f, %f", &a, &b);
    int sum = a + b;
    int sub = a - b;
    int mult = a * b;
    float div = a / b;
    printf("%d %d %d %0.2f", sum, sub, mult, div);

    return 0;
}