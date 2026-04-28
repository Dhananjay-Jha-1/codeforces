#include <stdio.h>

int main(void)
{
    int n, t;
    scanf("%d %d", &n, &t);

    char s[51];
    scanf("%s", s);

    while(t--)
    {
        for(int i = 0; s[i] != '\0'; i++)
        {
            if( (int) s[i+1] > (int) s[i])
            {
                //swap
                int temp = s[i];
                s[i] = s[i+1];
                s[i+1] = temp;
                i++;
            }
        }
    }

    printf("%s", s);

    return 0;
}
