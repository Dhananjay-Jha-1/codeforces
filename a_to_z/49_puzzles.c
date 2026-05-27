#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <math.h>

#define ll long long
#define ull unsigned long long

int compareInts(const void *a, const void *b) 
{
    int valA = *(const int *)a;
    int valB = *(const int *)b;

    return (valA > valB) - (valA < valB);
}

void solve()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[m];
    for(int i = 0; i < m; i++)
    {
        scanf("%d", &arr[i]);

    }

    qsort(arr, m, sizeof(int), compareInts);
    
    int diff, min = INT_MAX;
    for(int i = 0; i + n <= m; i++)
    {
        diff = arr[i+n-1] - arr[i];
        if(diff < min)
            min = diff;
    }
    printf("%d", min);
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
