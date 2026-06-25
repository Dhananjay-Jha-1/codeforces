#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <math.h>

#define ll long long
#define ull unsigned long long

void solve()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    ll ans = 0;
    for(int i = 0; i < n-1; i++)
    {
        if(arr[i] > arr[i+1])
        {
            ans += (arr[i] - arr[i+1]);
            arr[i+1] = arr[i]; 
        }
    }
    printf("%lld", ans);
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
