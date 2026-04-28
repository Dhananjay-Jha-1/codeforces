#include <stdio.h>
#define STR_LEN 100

int main(void)
{
    int remove_count = 0, count = 0, index, index_b;

    char word[STR_LEN + 1];
    char *s = word;
    scanf("%s", s);

    for(int i = 0; i < STR_LEN; i++)
    {
            if (s[0] == 'a' )
            {
                if(s[i] == 'b')
                {
                    index = i;
                    for(int j = index; j < STR_LEN; j++)
                    {
                        if(s[index+count] == 'a')
                        remove_count++;
                        count++;
                    }
                }
                 
            }
            if(s[0] == 'b')
            {
                if(s[i] == 'a')
                {
                    index = i;
                    for(int j = 0; j < index; j++)
                    {
                        remove_count = j;
                    }
                    break;
                }
                    
                    
            }
      }
    printf("%d", remove_count);
    return 0;

}


