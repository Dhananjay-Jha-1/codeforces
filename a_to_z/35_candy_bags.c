#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int t = n*n;
    int p = 1;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n/2; j++)
        {
            printf("%d %d ", p, t);
            p++;
            t--;
        }
        printf("\n");
    }

    return 0;
}

