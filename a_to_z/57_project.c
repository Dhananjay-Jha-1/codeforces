#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <math.h>

#define ll long long
#define ull unsigned long long

int solve()
{
    int n, x, y, z;   
    scanf("%d %d %d %d", &n, &x, &y, &z); // no of lines of code, m's speed, n's speed w/o ai, ai setup time
    
    int ans = 0;
    if(z == 0)
    {
        while(n > 0)
        {
            ans++;
            n = n - (x + 10 * y);
            if( n == 0)
                return ans;
        }
    }
    else
    {
        int temp = z, i1 = 0, i2 = 0, temp1 = n;
        while(n > 0)
        {
            n = n - (x + y);
            i1++;
        }
        while(temp1 > 0)
        {
            temp--;
            temp1 = temp1 - x;
            if(temp == 0)
                temp1 = temp1 - (x + 10 * y);
            i2++;
        }
        if(i1 > i2)   
            return i2;
        else
            return i1;
    }
}

int main(void)
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        printf("%d\n", solve());
    }
    
    return 0;
}
