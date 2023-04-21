#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int num;
    int even_sum = 0, odd_sum = 0;
    for (int i = 0; i < N; i++)
    {
        scanf("%d ", &num);
        if (num % 2 == 0)
        {
            even_sum = even_sum + num;
        }
        else
        {
            odd_sum = odd_sum + num;
        }
    }
    printf("%d %d", even_sum, odd_sum);
    return 0;
}