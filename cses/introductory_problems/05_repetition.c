
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <math.h>

#define ll long long
#define ull unsigned long long

#define N 1000000

void solve()
{
    char* s = malloc((N+1) * sizeof *s);
    scanf("%s", s);
    
    int c = 1, c_max = 0;
    int len = strlen(s);
    for(int i = 0; i < len-1; i++)
    {
        if(s[i] == s[i+1])
        {
            c++;
        }
        if(s[i] != s[i+1])
        {
            if(c > c_max)
            {
                c_max = c;
            }
            c = 1;
        }
    }
    if(c > c_max)
        c_max = c;
    printf("%d", c_max);
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
