#include <stdio.h>
#define ll    long long

int main(void)
{
    ll n, m;
    scanf("%lld %lld", &n, &m);
    
    ll current = 1;
    ll target, time = 0;
    for(int i = 0; i < m; i++)
    {
        scanf("%lld", &target);
        
        if(target >= current)
        {
            time += target - current;
        }
        else 
        {
            time += (n - current) + target;
        }
        current = target;
    }
    printf("%lld", time);
}
