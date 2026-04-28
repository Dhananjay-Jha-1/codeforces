#include <stdio.h>

int main(void)
{
    // n --> no. of participants 
    // k --> a position 
    // if score >= score at the kth place, advancement to the next round

    int n, k, count = 0 ;

    // printf("Enter n and k : ");
    scanf("%d %d", &n, &k);

    int a[n];
    int target;

    for (int i = 0; i < n ; i++)
    {
        scanf("%d", &a[i]);
    }
    target = a[k-1];
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= target && a[i] > 0)
            count++ ;
    }
    printf("%d", count);
    
}
