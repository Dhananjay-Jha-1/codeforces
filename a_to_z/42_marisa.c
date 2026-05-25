#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);

    int n, sum, count, count_3;
    while(t--)
    {
        scanf("%d", &n);
        int w[n];
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &w[i]);
        }
        sum = 0, count = 0, count_3 = 0;
        for(int i = 0; i < n; i++)
        {
            sum += w[i];
            if(sum == 3)
            {
                count_3++;
                if(w[i] == 2 || w[i-1] == 2)
                {
                    count--;
                }
                else
                {
                    count -= 2;
                }
                sum = 0;
            }
            else
            {
                count++;
            }
        }
        printf("%d", count_3 + count);
    }
    
}
