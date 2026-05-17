#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;     //no. of statements
    scanf("%d", &n);
    
    int x = 0;
    char* lines;
    for(int i = 0; i < n; i++)
    {   
        lines = (char*) malloc(4 * sizeof(char));
        scanf("%s", lines);

        for(int i = 0; i < 3; i++)             //ek line me x++ , ++X, x--, --x    (+ > 1, - < 1)
        {
            if(lines[i] == '+')
            {
                x++;
                break;
            }
            else if(lines[i] == '-')
            {
                x--;
                break;
            }
        }
    }

    printf("%d", x);

    return 0;
}
