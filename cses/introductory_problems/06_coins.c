
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <math.h>

#define ll long long
#define ull unsigned long long

void solve()
{
    int a, b;
    scanf("%d %d", &a, &b);

    while(1)
    {
        if(a % 2 == 0 && b % 2 != 0)
        {
            a = a-2;
            b = b-1;
            if(a-b == 0)
            {
                printf("YES\n");
                return;
            }
            else if(a == 0 && b != 0)
            {
                printf("NO\n");
                return;
            }
            else if(a != 0 && b == 0)
            {
                printf("NO\n");
                return;
            }
        }
        else if(a % 2 != 0 && b % 2 == 0)
        {
            b = b-2;
            a = a-1;
            if(a-b == 0)
            {
                printf("YES\n");
                return;
            }
            else if(a == 0 && b != 0)
            {
                printf("NO\n");
                return;
            }
            else if(a != 0 && b == 0)
            {
                printf("NO\n");
                return;
            }
        }
        else
        {
            if(a >= b)
            {
                a = a - 2;
                b = b - 1;
                if(a-b == 0)
                {
                    printf("YES\n");
                    return;
                }
                else if(a == 0 && b != 0)
                {
                    printf("NO\n");
                    return;
                }
                else if(a == 0 && b != 0)
                {
                    printf("NO\n");
                    return;
                }

            }
            else
            {
                b = b - 2;
                a = a - 1;
                if(a-b == 0)
                {
                    printf("YES\n");
                    return;
                }
                else if(a == 0 && b != 0)
                {
                    printf("NO\n");
                    return;
                }
                else if(a != 0 && b == 0)
                {
                    printf("NO\n");
                    return;
                }
            }
        }
    }
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
