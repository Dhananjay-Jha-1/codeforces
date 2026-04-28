#include <stdio.h>

int main(void)
{
    int j = 0;

    char s[201], new_s[201];
    scanf("%s", s);

    for(int i = 0; s[i] != '\0'; i++)
    {
        if(s[i] == '-' && s[i+1] == '.')
        {
            new_s[j] = '1';
            j++;
            i++;
        }
        else if(s[i] == '-' && s[i+1] == '-')
        {
            new_s[j] = '2';
            j++;
            i++;
        }
        else if (s[i] == '.')
        {
            new_s[j] = '0';
            j++;
        }
    }
    new_s[j] = '\0';

    printf("%s", new_s);

    return 0;
}
