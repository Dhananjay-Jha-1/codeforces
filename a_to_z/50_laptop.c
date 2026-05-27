#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <math.h>

#define ll long long
#define ull unsigned long long

typedef struct
{
    int price;
    int quality;
}laptop;

int compare(const void* a, const void* b)
{
    laptop* x = (laptop*) a;
    laptop* y = (laptop*) b;

    return x->price - y->price;
}

void solve()
{
    int n;
    scanf("%d", &n);

    laptop arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d %d", &arr[i].price, &arr[i].quality);
    }

    qsort(arr, n, sizeof(laptop), compare);

    for(int i = 0; i < n-1; i++)
    {
        if(arr[i].quality > arr[i+1].quality)
        {
            printf("Happy Alex");
            return;
        }
    }
    printf("Poor Alex");
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
