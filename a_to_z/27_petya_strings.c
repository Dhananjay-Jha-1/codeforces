#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char* s1 = (char*) malloc(101 * sizeof(char));
    scanf("%s", s1);
    
    char* s2 = (char*) malloc(101 * sizeof(char));
    scanf("%s", s2);

    //converts eveything into lower case
    for(int i = 0; s1[i] != '\0'; i++)
    {
        if((int) s1[i] >= 65 && s1[i] < 92)
        {
            s1[i] = (int) s1[i] + 32;    
        } 
        if((int) s2[i] >= 65 && s2[i] < 92)
        {
            s2[i] = (int) s2[i] + 32;    
        }
    }
    int flag = 0;
    for(int i = 0; s1[i] != '\0'; i++)
    {
        if((int) s1[i] < (int) s2[i])
        {
            printf("-1");
            flag = 1;
            break;
        }
        else if((int) s1[i] > (int) s2[i])
        {
            printf("1");
            flag = 1;
            break;
        }
    }
    if(!flag)
        printf("0");

    free(s1);
    s1 = NULL;
    free(s2);
    s2 = NULL;

    return 0;
}
    
