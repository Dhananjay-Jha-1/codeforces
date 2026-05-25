#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <math.h>

#define ll long long
#define ull unsigned long long

void solve()
{
    char* s = (char*) malloc(11 * sizeof(char));
    scanf("%s", s);

    int i = 0;
    while(s[i] != '\0')
    {
        if(s[i] == '1' && s[i+1] == '4' && s[i+2] == '4')
            i += 3;
        else if(s[i] == '1' && s[i+1] == '4')
            i += 2;
        else if(s[i] == '1')
            i++;
        else
        {
            printf("NO\n");
            return;
        }
    }
    printf("YES");
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
