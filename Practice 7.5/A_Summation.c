#include <stdio.h>
int main()
{
    int n, i;
    long long int sum = 0;
    scanf("%d", &n); // এরে সাইজ নেওয়া হলো
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); // এরে এর ভ্যালু গুলো নেওয়া হলো
        sum += arr[i];        // ভ্যালু গুলোর যোগফল নির্ণয় করা হলো
    }
    if (sum < 0)
        sum *= -1;         // চেক করে যদি নেগেটিভ হয় তাহলে তাকে পজিটিভ করা হলো
    printf("%lld\n", sum); // যোগফল প্রিন্ট করা হলো
    return 0;
}
