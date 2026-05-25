#include <stdio.h>

int main(void)
{
    int  n, a, b;
    scanf("%d %d %d", &n, &a, &b);

    // a -> atleast 'a' folks standing in front
    // b -> atmost 'b' folks standing behind
    
    int ans = 0;
    for(int i = 1; i <= n; i++)
    {
        int front = i - 1;
        int behind = n - i;

        if(front >= a && behind <= b)
            ans++;
    }
    printf("%d", ans);

    return 0;
}
