
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

    int h[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &h[i]);
    }
    int max = h[0], min = h[0];
    for(int i = 0; i < n; i++)
    {
        if(h[i] > max)
            max = h[i];
        else if(h[i] < min)
            min = h[i];
    }
    printf("%d\n", max - min + 1);
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
