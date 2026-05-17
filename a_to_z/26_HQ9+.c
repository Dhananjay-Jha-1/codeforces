#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char* s = (char*) malloc(101 * sizeof(char));
    scanf("%s", s);
    
    int flag = 0;         
    for(int i = 0; s[i] != '\0'; i++)
    {
        if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9')   
        {
            flag = 1;
            break;
        }
    }
    if(flag)
        printf("YES");
    else
        printf("NO");
}
