/****It seems like the year of 2013 came only yesterday. Do you know a curious fact? The year of 2013 is the first year after the old 1987 with only distinct digits.

Now you are suggested to solve the following problem: given a year number, find the minimum year number which is strictly larger than the given one and has only distinct digits.
Input

The single line contains integer y (1000 ≤ y ≤ 9000) — the year number.
Output

Print a single integer — the minimum year number that is strictly larger than y and all it's digits are distinct. It is guaranteed that the answer exists.****/

#include <stdio.h>

int main(void)
{
    int i, y, digit;
    scanf("%d", &y);

    for(i = 1000; i < 9001; i++)
    {
        int temp = i;
        while(i > 0)
        {
            digit = temp % 10;
            for(int j = 0; i < 4; j++)
            {
                
            }
            temp = temp / 10;
        }
        if(i > y)
            break;
    }
    printf("%d", i);

    return 0;
}

