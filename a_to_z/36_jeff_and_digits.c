#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int a[n], zero_n = 0, five_n = 0, actual_fives;
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);

        if(a[i] == 0)
            zero_n++;
        else
            five_n++;
    }
    if(zero_n == 0)
    {
        printf("-1");
	return 0;
    }
    else
    {
        //now the number of fives must be a multiple of 9 and discard more 5s
        int remainder = five_n % 9;
        actual_fives = five_n - remainder;
    }
    if(actual_fives == 0)
        printf("0");
    else
    {
        for(int i = 0; i < actual_fives; i++)
            printf("5");
        for(int i = 0; i < zero_n; i++)
            printf("0");
    }
    return 0;
}
