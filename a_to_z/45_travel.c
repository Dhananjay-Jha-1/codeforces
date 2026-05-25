#include <stdio.h>
#define ll long long 
#include <limits.h>

int main(void)
{
    ll n;
    scanf("%lld", &n);

    ll distance, min_d = LLONG_MAX, count = 0;
    ll index = 0;
    for(ll i = 0; i < n; i++)
    {
        scanf("%lld", &distance);

        if(distance < min_d)
        {
            min_d = distance;
            index = i + 1;
            count = 0;
        }
        else if(min_d == distance)
            count = 1;

    }
    if(count)
        printf("Still Rozdil\n");
    else 
        printf("%lld", index);

    return 0;
}
