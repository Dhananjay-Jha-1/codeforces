/*** There is a road, which can be represented as a number line. You are located in the point 0 of the number line, and you want to travel from the point 0 to the point x, and back to the point 0.

You travel by car, which spends 1 liter of gasoline per 1 unit of distance travelled. When you start at the point 0, your car is fully fueled (its gas tank contains the maximum possible amount of fuel).

There are n gas stations, located in points a1,a2,…,an. When you arrive at a gas station, you fully refuel your car. Note that you can refuel only at gas stations, and there are no gas stations in points 0 and x.

You have to calculate the minimum possible volume of the gas tank in your car (in liters) that will allow you to travel from the point 0 to the point x and back to the point 0.
Input

The first line contains one integer t (1≤t≤1000) — the number of test cases.

Each test case consists of two lines:

    the first line contains two integers n and x (1≤n≤50; 2≤x≤100);
    the second line contains n integers a1,a2,…,an (0<a1<a2<⋯<an<x). 

***/

// distance travelled = 2x units
// 1 L of gas per unit distance   1 unit distance = 1 L of gas,, 2x units distance = 2x L of gas
// point 0 -> gas is full ,, i.e,  gas max
// n gas station at points a1, a2, ...   at each gas station, gas maxed
// no gas stations at 0 and x
// calculate the min volume of gas to be filled at point 0

#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int n, x;  // n gas stations
        scanf("%d %d", &n, &x);
        int a[n];   // fuel stations
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        // the min capacity of fuel tank is the max of the distances of array a[n]
        
        int max_d = a[0];
        for(int i = 0; i < n-1; i++)
        {
            int gap = a[i+1] - a[i];
            if(gap > max_d)
                max_d = gap;
        }
        int last_d = 2 * (x - a[n-1]);

        if(last_d > max_d)
            max_d = last_d;

        printf("%d\n", max_d);
           
    }
       
}
