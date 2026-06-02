#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <math.h>

#define ll long long
#define ull unsigned long long

void solve()
{
    int m, n;
    scanf("%d %d", &m, &n);

    int area = m * n;
    int ans = area / 2;

    printf("%d", ans);
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
