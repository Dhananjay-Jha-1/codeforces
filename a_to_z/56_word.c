#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <math.h>

#define ll long long
#define ull unsigned long long

void solve()
{
    char* s = (char*) malloc(101 * sizeof(char));
    scanf("%s", s);

    int count_u = 0, count_l = 0;
    for(int i = 0; s[i] != '\0'; i++)
    {
        if((int) s[i] >= 65 && s[i] <= 90)
            count_u++;
        else
            count_l++;
    }
       if(count_u <= count_l)  
    {
        for(int i = 0; s[i] != '\0'; i++)
        {
            if((int) s[i] >= 65 && s[i] <= 90)
                s[i] = (int)s[i] + 32;      
        }
    }
    else if(count_l < count_u)
    {
        for(int i = 0; s[i] != '\0'; i++)
        {
            if((int) s[i] >= 97)
                s[i] = (int) s[i] - 32;
        }
    }
    printf("%s", s);
}

int main(void)
{
    int t = 1;
    // scanf("%d", &t);

    while(t--)
    {
        solve();
    }

    return 0;
}
