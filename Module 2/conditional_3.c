#include <stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if (tk >= 5000)
    {
        printf("Cox-bazar jabo\n");
        if (tk >= 10000)
        {
            printf("Saint-marin jabo\n");
        }
        else
        {
            printf("basai ferot jabo\n");
        }
    }
    else
    {
        printf("ferot jabo\n");
    }

    return 0;
}

// nested if else