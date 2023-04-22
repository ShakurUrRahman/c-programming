#include <stdio.h>
int main()
{
    // char a[5] = {'S', 'h', 'a', 'k', 'u', 'r'};
    char a[7] = "Shakur\0";
    printf("%s", a);
    // for (int i = 0; i < 6; i++)
    // {
    //     printf("%c\n", a[i]);
    // }

    return 0;
}