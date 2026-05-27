#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <math.h>

#define ll long long
#define ull unsigned long long

int compare_ints(const void *a, const void *b) 
{
    int val_a = *(const int *)a;
    int val_b = *(const int *)b;
    return (val_a > val_b) - (val_a < val_b);
}

void solve()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int p = 1, n1 = 0, n2 = 0, n3 = 0;
    int* neg_set = (int*) malloc((n+1) * sizeof(int));
    int* pos_set = (int*) malloc((n+1) * sizeof(int));
    int* equal_set =  (int*) malloc((n+1) * sizeof(int));

    //new approach
    //first sort
    qsort(arr, n, sizeof(int), compare_ints);
    
    //ab pair bnao -ve numbers ka 
    for(int i = 0; i < n-1; i++)
    {
        if(arr[i] < 0 && arr[i+1] >= 0)
        {
            neg_set[n1] = arr[i];
            n1++;
        }
        else if(arr[i] < 0 && arr[i+1] < 0)
        {
            pos_set[n2] = arr[i];
            n2++;
            pos_set[n2] = arr[i+1];
            n2++;
            i += 1;
        }
        else if(arr[i] == 0)
        {
            equal_set[n3] = arr[i];
            n3++;
        }
        else if(arr[i] > 0)
        {
            pos_set[n2] = arr[i];
            n2++;
        }
    }

    printf("%d ",n1);
    for(int i = 0; i < n1; i++)
    {
        printf("%d ", neg_set[i]);
    }
    printf("\n%d ", n2);
    for(int i = 0; i < n2; i++)
    {
        printf("%d ", pos_set[i]);
    }
    printf("\n%d ", n3);
    for(int i = 0; i < n3; i++)
    {
        printf("%d ", equal_set[i]);
    }
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
