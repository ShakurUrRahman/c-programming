#include <stdio.h>

void division(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    int s = a / b;
    printf("%d\n", s);
}
int main()
{
    division();
    return 0;
}