#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <math.h>

#define ll long long
#define ull unsigned long long

void solve()
{
    char* s = (char*) malloc(101 * sizeof(char));
    scanf("%s", s);

    int l = strlen(s);
    
    if(l < 7) 
    {
        printf("NO");
        return;
    }
    int count = 1;
    for(int i = 0; i < l; i++)
    {
        if(s[i] == s[i-1])
        {
            count++;
            if(count >= 7)
            {
                printf("YES");
                return;
            }
        }
        else
        {
            count = 1;
        }
    }
    printf("NO");
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
