#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] < 0)
        {
            arr[i] = 2;
        }
        else if (arr[i] > 0)
        {
            arr[i] = 1;
        }
        else
        {
            arr[i] = 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

// #include <stdio.h>

// int main()
// {
//     int size;
//     scanf("%d", &size);

//     int arr[size];
//     for (int i = 0; i < size; i++)
//     {
//         scanf("%d", &arr[i]);

//         // checking for negative value
//         if (arr[i] < 0)
//         {
//             arr[i] = 2; // multiplying by 2
//         }
//         // checking for positive value
//         else if (arr[i] > 0)
//         {
//             arr[i] = 1; // assigning 1
//         }
//         // value is already 0, do nothing
//     }

//     // printing the modified array
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }
