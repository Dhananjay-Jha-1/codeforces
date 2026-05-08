#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char* guest = (char*) malloc(101 * sizeof(char));
    scanf("%s", guest);

    char* host = (char*) malloc(101 * sizeof(char));
    scanf("%s", host);

    char* pile= (char*) malloc(250 * sizeof(char));
    scanf("%s", pile);

    int guest_freq[26] = {0};
    for(int i = 0; guest[i] != '\0'; i++)
    {
        guest_freq[guest[i] - 'A']++;    // so that it maps letters
    }
 
    int host_freq[26] = {0};
    for(int i = 0; host[i] != '\0'; i++)
    {
        host_freq[host[i] - 'A']++;
    }

    int pile_freq[26] = {0};
    for(int i = 0; pile[i] != '\0'; i++)
    {
        pile_freq[pile[i] - 'A']++;
    }
   
    for(int i = 0; i < 26; i++)
    {
        if(guest_freq[i] + host_freq[i] != pile_freq[i])
        {
            printf("NO");
            return 0;
        }
    }

    printf("YES");

    return 0;
}
