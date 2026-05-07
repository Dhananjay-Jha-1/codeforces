#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int c_lower = 0, c_upper = 0;

    char* s = (char*) malloc(101 * sizeof(char));

    scanf("%s", s);

    for(int i = 0; s[i] != '\0'; i++)
    {
        if( (int) s[i] >= 65 && (int) s[i] < 91)
            c_upper++;
        else
            c_lower++;
    }
    
    for(int i = 0; s[i] != '\0'; i++)
    {
        if(c_lower > c_upper)
        {
            if( (int)s[i] >= 65 && (int) s[i] < 91)
                s[i] = s[i] + 32;
        }
        else if (c_lower < c_upper)
        {
            if((int)s[i] >= 97)
                s[i] = s[i] - 32;
        }
        else
        {
            if( (int)s[i] >= 65 && (int) s[i] < 91)
                s[i] = s[i] + 32;
        }
    }
   
    printf("%s", s);

    return 0;
}


