#include <stdio.h>

int main(void)
{
    long long n;
    scanf("%lld", &n);

    long long sum = (n * (n+1)) / 2;

    long long num, sum_num = 0;
    for(int i = 0; i < n-1; i++)
    {
        scanf("%lld", &num); 

        sum_num += num;
    }
    printf("%lld", sum - sum_num);
}
