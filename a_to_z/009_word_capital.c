#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *s = (char*) malloc(1000 * sizeof(char));

    scanf("%s", s);

    if((int)s[0] >= 97)
        s[0] = s[0] - 32;  

    printf("%s", s);

    return 0;
}
