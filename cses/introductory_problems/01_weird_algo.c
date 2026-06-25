#include <stdio.h>

int main(void)
{
    long long n;
    scanf("%lld", &n);
    
    printf("%lld ", n);

    while(n != 1)
    {
        if(n % 2 == 0)
            n /= 2;
        else
            n = 3*n + 1;

        printf("%lld ", n);
    }
}
