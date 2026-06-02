#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <math.h>

#define ll long long
#define ull unsigned long long

void solve()
{
    int s;
    scanf("%d", &s);

    int m[s], n[s];
    for(int i = 0; i < s; i++)
    {
        scanf("%1d%1d", &m[i], &n[i]);
    }
    
    int ans = 1;
    for(int i = 1; i < s; i++)
    {
        if(m[i-1] != m[i])
            ans++;
    }
    printf("%d\n", ans);
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
