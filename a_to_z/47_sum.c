#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <math.h>

#define ll long long
#define ull unsigned long long

void solve()
{
    char s[1000001];
    scanf("%s", s);
    
    int n = strlen(s);
    if(n == 1)
    {
        printf("0");
        return;
    }
    int sum = 0, sum_new = 0;
    for(int i = 0; s[i] != '\0'; i++)
    {
        sum += s[i] - '0';
    }
       
    int ans = 1;
    while(sum > 9)
    {
        int temp = 0;
        while(sum > 0)
        {
            temp += sum % 10;
            sum = sum / 10;
        }
        sum = temp;
        ans++;
    }
    printf("%d", ans);
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
