#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int a, b;   // a is exit, b is no of people entering 

    int max = 0, each_stop = 0;
    for(int i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);
    
        each_stop += b;
        each_stop -= a;

        if(each_stop > max)
            max = each_stop;


    }
    printf("%d", max);

    return 0;
}
