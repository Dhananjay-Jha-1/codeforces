//no of distinct characters must be even for the user to be a girl
// hashing

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char* s = (char*) malloc(101 * sizeof(char));

    scanf("%s", s);

    int count = 0, arr[256] = {0};

    for(int i = 0; s[i] != '\0'; i++)
    {
        if(arr[(int)s[i]] == 0)
        {
            arr[(int)s[i]] = 1;
            count++;
        }
    }

    if(count % 2 == 0)
        printf("CHAT WITH HER!");
    else
        printf("IGNORE HIM!");
}
