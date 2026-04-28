#include <stdio.h>

int abs(int x)
{
    if(x > 0)
        return x;
    else
        return -x;
}

int main(void)
{
    int x, row, column;


    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            scanf("%d", &x);
            
            if(x == 1)
            {
                row = i + 1;
                column = j + 1;
            }
        }
    }   
    
   int steps_rows = abs(3-row);
   int steps_col = abs(3-column);

   printf("%d", steps_rows + steps_col);

    return 0;
}
