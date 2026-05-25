#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    
    int a, check = 0, n = 10;
    while(t--)
    {
        scanf("%d", &a);  // angle 
        
        // a = ((n-2) * 180) / n;   now
        // a = (180n - 360) / n
        // a = 180 - 360/n
        // 360/n = 180-a
        // n = 360/ ( 180-a)

        // so no of sides must be an int and greater than 3

        if(360 % (180 - a) == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
   }
}

