#include <stdio.h>

int main(void)
{
    int n, m;
    scanf("%d %d", &n, &m);
   
    int i = 1;
    for(;;)
    {
        if(m < i)
            break;
        if(m >= i)
        {
            m -= i;
            i++;
        }
        if(i > n)
            i = 1;
    }
    printf("%d", m);
}
