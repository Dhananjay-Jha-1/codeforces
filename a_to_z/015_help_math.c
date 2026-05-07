#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char* s = (char*) malloc(101 * sizeof(char));

    scanf("%s", s);

    for(int i = 0; s[i] != '\0'; i++)
    {
        for(int j = 0; s[j+2] != '\0'; j++)
        {
            if(s[j] > s[j+2] && s[j] >= '1' && s[j+2] >= '1')
            {
                char temp = s[j+2];
                s[j+2] = s[j];
                s[j] = temp;
            }
        }
    }
    printf("%s\n", s);
    
    free(s);
    s = NULL;

    return 0;
}
