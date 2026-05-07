/******One day Vasya painted a Cartesian coordinate system on a piece of paper and marked some set of points (x1, y1), (x2, y2), ..., (xn, yn). Let's define neighbors for some fixed point from the given set (x, y):

    point (x', y') is (x, y)'s right neighbor, if x' > x and y' = y
    point (x', y') is (x, y)'s left neighbor, if x' < x and y' = y
    point (x', y') is (x, y)'s lower neighbor, if x' = x and y' < y
    point (x', y') is (x, y)'s upper neighbor, if x' = x and y' > y 

We'll consider point (x, y) from the given set supercentral, if it has at least one upper, at least one lower, at least one left and at least one right neighbor among this set's points.

Vasya marked quite many points on the paper. Analyzing the picture manually is rather a challenge, so Vasya asked you to help him. Your task is to find the number of supercentral points in the given set.
Input

The first input line contains the only integer n (1 ≤ n ≤ 200) — the number of points in the given set. Next n lines contain the coordinates of the points written as "x y" (without the quotes) (|x|, |y| ≤ 1000), all coordinates are integers. The numbers in the line are separated by exactly one space. It is guaranteed that all points are different.
Output

Print the only number — the number of supercentral points of the given set. 
*********************/

#include <stdio.h>

int main(void)
{
    int n;               
    scanf("%d", &n);
    
    int x[n], y[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d %d", &x[i], &y[i]);
    }
    int count_right, count_left, count_lower, count_upper, count_final = 0;
    for(int i = 0; i < n; i++)
    {
        count_right = 0, count_left = 0, count_lower = 0, count_upper = 0;
        for(int j = 0; j < n; j++)
        {
            if(x[i] - x[j] > 0 && y[i] == y[j])
                count_right++;
            else if(x[i] - x[j] < 0 && y[i] == y[j])
                count_left++;
            else if (x[i] == x[j] && y[i] - y[j] < 0)
                count_lower++;
            else if (x[i] == x[j] && y[i] - y[j] > 0)
                count_upper++;
        }
        if(count_right > 0 && count_left > 0 && count_lower > 0 && count_upper)
            count_final++;
    }
    printf("%d", count_final);
}
