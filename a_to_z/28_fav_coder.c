 /****     First, it is amazing if during the contest the coder earns strictly more points that he earned on each past contest. Second, it is amazing if during the contest the coder earns strictly less points that he earned on each past contest. *****/

#include <stdio.h>
#include <limits.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int amazing = 0, min = arr[0], max = arr[0];
    for(int i = 1; i < n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
            amazing++;
        }
        if(arr[i] < min)
        {
            min = arr[i];
            amazing++;
        }
    }
    printf("%d", amazing);

    return 0;
}
