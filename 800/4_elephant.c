/******An elephant decided to visit his friend. It turned out that the elephant's house is located at point 0 and his friend's house is located at point x(x > 0) of the coordinate line. In one step the elephant can move 1, 2, 3, 4 or 5 positions forward. Determine, what is the minimum number of steps he need to make in order to get to his friend's house.
Input

The first line of the input contains an integer x (1 ≤ x ≤ 1 000 000) — The coordinate of the friend's house.
Output

Print the minimum number of steps that elephant needs to make to get from point 0 to point x.************************/

#include <stdio.h>

int main(void)
{
    int x;
    scanf("%d", &x);

    int min_steps;

    // alright, so this is just maths right, let's try to solve it 
    // now if x is 1 to 5 --> min_steps = 1    x/x  -->  x/5 + 1
    // if x is 6 to 10 --> min_steps = 2       x/5 + 1
    // if x is 11 to 15 --> min_steps = 3      x/5 + 1
    // the above logic has a flaw it does not work for x = 5 , -- min_steps = x/5 + 1 = 2 which is wrong
    // similarly for x = 10, -- min_steps = x/5 + 1 = 3 which is wrong 
    
    min_steps = x/5 + 1;

     if ( x % 5 == 0) {                
         min_steps = min_steps - 1;
     }

    printf("%d", min_steps);

    return 0;
}
