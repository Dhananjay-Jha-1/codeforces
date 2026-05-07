#include <stdio.h>

int check_prime(int num)
{
    int count = 0;

    for(int i = 1; i <= num; i++)
    {
        if(num % i == 0)
            count++;
    }
    if(count == 2)
        return 12;
    else
        return -1;
}


int main(void)
{
    int n, m;
    int c = 0;
    scanf("%d %d", &n, &m);
    
    if(check_prime(m) == 12)
    {
        for(int i = n+1; i < m; i++)
        {
            if(check_prime(i) == 12)     
                c++;
        }
    }
    else
    {
        printf("NO");
        return 0;
    }

    if(c > 0)
        printf("NO");
    else
        printf("YES");

    return 0;
}
