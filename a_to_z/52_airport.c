#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <math.h>

#define ll long long
#define ull unsigned long long

int compare(const void* a, const void* b)
{
    int aa = *(int*) a;
    int bb = *(int*) b;

    return (aa > bb) - (aa < bb);
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
    qsort(arr, m, sizeof(int), compare);

    int arr_t[m];
    for(int i = 0; i < m ; i++)
    {
        arr_t[i] = arr[i];
    }

    int i = 0, j = 0, min = 0, max = 0;;
    while(i < n)
    {
        min += arr_t[j];
        arr_t[j] = arr_t[j] - 1;
        if(arr_t[j] == 0)
            j++;

        i++;
    }

    i = 0, j = m - 1;
    while(i < n)
    {
        max += arr[j];
        arr[j] = arr[j] - 1;
        if(arr[j] < arr[j-1] && j < 0)
            j--;

        if(i < n && j == 0)
            j = m-1;

        i++;
    }

    printf("%d %d", min, max);
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
