#include <stdio.h>

int main(void)
{
    int s[4];
    for(int i = 0; i < 4; i++)
    {
        scanf("%d", &s[i]);
    }

    int count = 0;
    for(int i = 0; i < 4; i++)
    {
        for(int j = i+1; j < 4; j++)
        {
            if(s[i] == s[j])
            {
                count++;
            }
        }
    }
    printf("%d", count);

    return 0;
}
   
