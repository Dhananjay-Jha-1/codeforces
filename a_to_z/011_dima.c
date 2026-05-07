#include <stdio.h>

int main(void)
{
    int n;    // n is the number of dima's friends excluding dima
    scanf("%d", &n);
    int total = n;

    int fingers, sum = 0;
    while(total--)
    {
        scanf("%d", &fingers);
        sum += fingers;
    }
    
    //position = (sum + i) % (n+1);    //position = 
    
    int count = 0;
    for(int i = 1; i <=5; i++)   // i represents the fingers that dima can pull up
    {
        if( (sum + i) % (n + 1) != 1)
            count++;
    }

    printf("%d", count);

    return 0;
}
