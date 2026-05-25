#include <stdio.h>
#include <math.h>

int main(void)
{
    int n, x, y;
    scanf("%d %d %d", &n, &x, &y);
    
    double p_y = ((double)y/100) * n;  

    int real_py = (int)ceil(p_y);

    int ans = real_py - x;
    
    if(ans >= 0)
        printf("%d", ans);
    else
        printf("0");

    return 0;
}
