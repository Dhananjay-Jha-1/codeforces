#include <stdio.h>

int if_distinct_digits(int num)
{
    int seen[10] = {0};
    int temp = num;

    while(temp > 0)
    {
        int digits = temp % 10;
        
        seen[digits]++;

        if(seen[digits] > 1)
            return 0;

        temp = temp/10;
    }
    return 1;
}

int main(void)
{
    int n;
    scanf("%d", &n);

    for(int i = n+1; i < 9013; i++)
    {
        if(if_distinct_digits(i))    // mtlb jb 0 na ho, hence distinct digit h
        {
            printf("%d", i);
            break;
        }
    }
}
