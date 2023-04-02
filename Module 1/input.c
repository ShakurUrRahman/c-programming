#include<stdio.h>
int main()
{
    int tom, dick;
    // char p; is the other way to put % in a variable
    scanf("%d%% %d%%", &tom, &dick);
    printf("%d%% %d%%", tom, dick);
    return 0;
}