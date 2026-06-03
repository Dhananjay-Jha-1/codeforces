
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <math.h>

#define ll long long
#define ull unsigned long long

void solve()
{
    ll n, a, b;   // no of students, cost of individual key, cost of group key 
    scanf("%lld %lld %lld", &n, &a, &b);

    ll cost;

    if(n < 3)
    {
        if(b/n < a)
        {
            cost = b;
            printf("%lld\n", cost);
            return;
        }
        else
        {
            cost = a*n;
            printf("%lld\n", cost);
            return;
        }
    }
    if(b/3 >= a)
    {
        cost = n * a;
    }
    else
    {
        ll temp1 = (n/3 * b) + b;
        ll temp2 = (n/3 * b) + (n - (3 * (n/3))) * a;

        if(temp1 > temp2)
            cost = temp2;
        else
            cost = temp1;
    }
    printf("%lld\n", cost);
}

int main(void)
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        solve();
    }

    return 0;
}
