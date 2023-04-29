#include <stdio.h>
#include <math.h>

int main()
{
    int M1, M2, D;
    int days;
    scanf("%d %d %d", &M1, &M2, &D);
    days = (M1 * D);
    float result = days / M2;
    printf("%.0f\n", result);
    return 0;
}
