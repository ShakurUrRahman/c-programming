#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int right = a % 10;
    int left = a / 10;
    if (right % left == 0 || left % right == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}