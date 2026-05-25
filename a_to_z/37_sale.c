#include <stdio.h>

int main(void)
{
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    //array is sorted, now we gotta find the max money he can earn toh jidhar tak -ve ho rha h utna sum kr lo,  
    int sum = 0;
    
    if(arr[0] < 0)
    {
        for(int i = 0; i < m; i++)
        {
            if(arr[i] < 0)
            {
                sum += arr[i];
            }
        }
    }
    printf("%d", -sum);

    return 0;
}
