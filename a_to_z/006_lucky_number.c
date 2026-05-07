//no of lucky digits is a lucky number

#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main(void)
{
    int64_t n;
    scanf("%" SCNd64, &n);

    int digits, count = 0;
    
    while(n > 0)
    {
        //lucky digits are 4 and 7, no of lucky digits must be 4 or 7
        digits = n % 10;

        if(digits == 4 || digits == 7)
            count++;

        n = n / 10;
    }

    if(count == 4 || count == 7)
        printf("YES");
    else
        printf("NO");

    return 0;
}
