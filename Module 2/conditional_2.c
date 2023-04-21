#include <stdio.h>
int main()
{
    int TK;
    scanf("%d", &TK);
    if (TK > 1000)
    {
        printf("I will buy Punjabi\n");
        if (TK >= 1500)
        {
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes");
        }
    }
    else
    {
        printf("Bad luck!");
    }
    return 0;
}

// if else ladder