#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int t;
    scanf("%d", &t);

    int n; // length of the string
    char* s;
    while(t--)
    {
        scanf("%d", &n);
        s = (char*) malloc((n+1) * sizeof(char));
        scanf("%s", s);
        
        int output = 0;
        for(int i = 0; i < n-1; i++)
        {
            if(s[i] != s[i+2])
                output++;
        }
        printf("%d\n", output);
    }   
    return 0;
}
