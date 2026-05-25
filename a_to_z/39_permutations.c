#include <stdio.h>

int main(void)
{
    int n, k;
    scanf("%d %d", &n, &k);

    int temp = n;
    if(k == 0)
    {
        for(int i = 0; i < n; i++)
        {
            printf("%d ",i+1); 
        }
    }
    else
    {
        for(int i = 0; i < k; i++)
        {
            printf("%d ", temp);
            temp--;
        }
        int j = 1;
        for(int i = k; i < n; i++)
        {
            printf("%d ", j);
            j++;
        }
    }
}

 
