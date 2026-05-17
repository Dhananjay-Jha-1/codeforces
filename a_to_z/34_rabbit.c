#include <stdio.h>
#include <limits.h>

int main(void)
{
    int n, k;
    scanf("%d %d", &n, &k);
    
    int f[n], t[n];
    int joy[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d %d", &f[i], &t[i]);

        if(t[i] > k)
            joy[i] = f[i] - (t[i] - k);
        else
            joy[i] = f[i];
    }
    int max = joy[0];
    for(int i = 0; i < n; i++)
    {
        if(joy[i] > max)
            max = joy[i];
    }
    printf("%d", max);
}
