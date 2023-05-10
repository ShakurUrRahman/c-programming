#include <stdio.h>
#include <string.h>
int main()
{
    char X[100];
    char Y[100];

    scanf("%s", X);

    scanf("%s", Y);
    int result = strcmp(X, Y);
    if (result <= 0)
    {
        printf("%s", X);
    }
    else
    {
        printf("%s", Y);
    }

    return 0;
}
