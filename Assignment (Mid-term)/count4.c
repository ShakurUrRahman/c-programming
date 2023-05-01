#include <stdio.h>

int main()
{
    char str[1000];
    int uppercase = 0, lowercase = 0, i;
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            uppercase++;
        else if (str[i] >= 'a' && str[i] <= 'z')
            lowercase++;
    }

    printf("%d ", uppercase);
    printf("%d\n", lowercase);

    return 0;
}
