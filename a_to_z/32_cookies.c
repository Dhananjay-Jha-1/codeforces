#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int arr[n];

    int sum = 0;
    int odd_n = 0, even_n = 0;
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        sum += arr[i];
        if(arr[i] % 2 == 0)
            even_n++;
        else
            odd_n++;
    }
    if(sum % 2 == 0 && odd_n % 2 == 0)
    {
        printf("%d", even_n);
    }
    else if(sum % 2 == 0 && odd_n % 2 != 0)
    {
        printf("%d", odd_n);
    }
    else if(sum % 2 != 0 && odd_n % 2 == 0)
    {
        printf("%d", even_n);
    }
    else if(sum % 2 != 0 && odd_n % 2 != 0)
    {
        printf("%d", odd_n);
    }
}
