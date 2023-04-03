#include <stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if (tk >= 100)
    {
        printf("Eat burger");
    }
    else if (tk >= 50)
    {
        printf("Eat ice cream");
    }
    else
    {
        printf("Don't eat anything");
    }
    return 0;
}

// if else ladder