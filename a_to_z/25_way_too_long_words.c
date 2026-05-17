#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    char* s;
    for(int i = 0; i < n; i++)
    {
        s = (char*) malloc(101 * sizeof(char));
        scanf("%s", s);
       
        int l = strlen(s);

        if(l <= 10)
        {
            printf("%s", s);
        }
        else
        {
            printf("%c", s[0]);
            printf("%d", l-2);
            printf("%c", s[l-1]);
        }
        printf("\n");
    }
    return 0;
}

