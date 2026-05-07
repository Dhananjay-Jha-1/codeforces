#include <stdio.h>

int main(void)
{   
    int n;
    scanf("%d", &n);

    if(n % 2 != 0)
    {
        printf("-1");
    }
    else
    {
       for(int i = 1; i < n; i++)
        {
            printf("%d %d ", i+1, i);
            i += 1;
        }
    }
    return 0;
}
