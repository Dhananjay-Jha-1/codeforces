#include <stdio.h>

int main(void)
{
    int s, n;
    scanf("%d %d", &s, &n);

    int x, y;
    while(n--)
    {
        scanf("%d %d", &x, &y);

        if(s > x)
        {
            s += y;
        }
        else
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
}

