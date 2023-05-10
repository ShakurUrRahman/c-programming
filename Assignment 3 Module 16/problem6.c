// pass by value example
// #include <stdio.h>

// void swap(int x, int y)
// {
//     int temp = x;
//     x = y;
//     y = temp;
// }

// int main()
// {
//     int a = 10, b = 20;
//     swap(a, b);
//     printf("a = %d, b = %d\n", a, b);
//     return 0;
// }

// pass by reference example

#include <stdio.h>

void exchange(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a = 10, b = 20;
    exchange(&a, &b);
    printf("a = %d, b = %d\n", a, b);
    return 0;
}
