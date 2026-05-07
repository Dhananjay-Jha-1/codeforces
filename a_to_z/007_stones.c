#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    char *s = (char*) malloc(n * sizeof(char));

    scanf("%s", s);

    int count = 0;
    for(int i = 0; s[i] != '\0'; i++)
    {
        if(s[i] == s[i+1])
        {
            count++;   //count increases when 2 adjacent colors are the same 
//            i += 1;   // 0 and 1st element : compared now skip the 1st element 
        }
    }
    printf("%d", count);

    return 0;
}

    
