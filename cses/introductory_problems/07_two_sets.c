#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <math.h>

#define ll long long
#define ull unsigned long long

void solve()
{
    ll n;
    scanf("%lld", &n);
    
    ll sum = (n * (n+1)) / 2;
    
    if(sum % 2 != 0)
    {
        printf("NO\n");
        return;
    }
    else
    {
        ll target = (n * (n+1)) / 4;
        ll c_sum = 0, j = 0;

    for (ll i = 1; i <= n; i++)
    {
        c_sum += i;

        while (c_sum > target)
        {
            j++;
            c_sum -= j;
        }

        if (c_sum == target)
        {
            printf("YES\n");

            if (j == 0)
            {
                printf("%lld\n", i);
                for (ll k = 1; k <= i; k++)
                    printf("%lld ", k);

                printf("\n");

                printf("%lld\n", n - i);
                for (ll k = i + 1; k <= n; k++)
                    printf("%lld ", k);
            }
            else
            {
                printf("%lld\n", i - j);
                for (ll k = j + 1; k <= i; k++)
                    printf("%lld ", k);

                printf("\n");

                printf("%lld\n", j + (n - i));

                for (ll k = 1; k <= j; k++)
                    printf("%lld ", k);

                for (ll k = i + 1; k <= n; k++)
                    printf("%lld ", k);
            }

            printf("\n");
            return;
        }
    }
    }
}

int main(void)
{
    int t = 1;
    // scanf("%d", &t);

    while(t--)
    {
        solve();
    }

    return 0;
}
