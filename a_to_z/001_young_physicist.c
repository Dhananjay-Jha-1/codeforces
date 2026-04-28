#include <stdio.h>

int main(void)
{
    int n, sum_x = 0, sum_y = 0, sum_z = 0;
    scanf("%d", &n);

    while(n--)
    {
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);

        sum_x += x;
        sum_y += y;
        sum_z += z;
    }

    // alright so now when is the body at equilibrium, 
    // when forces along all x, y, and z coordinates equal to zero
    if(sum_x == 0 && sum_y == 0 && sum_z == 0)
        printf("YES");
    else
        printf("NO");

    return 0;
}

