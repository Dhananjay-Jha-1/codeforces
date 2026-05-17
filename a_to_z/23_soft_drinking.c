#include <stdio.h>

int min(int a, int  b, int  c)
{
    if(a <= b && a <= c)      return a;
    if(b <= a && b <= c)      return b;
    if(c <= a && c <= b)      return c;
}

int main(void)
{
    int n, k, l, c, d, p, nl, np;
    scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);
    
    // to make a toast, each friend needs nl mL of drink, a slice of lime and np grams of salt
    int q1, q2, q3;

    //n is the number of people
    q1 = k * l;   // q1 is the amount of drink, so q1 will be divided among n friends equally
    q2 = c * d;   // q2 is the amount of limes, n friends need n pieces of limes
    q3 = p;      // q3 is the amount of salt, n friends need n * np salt

    printf("%d", ((min(q1/nl, q2, q3/np))/n));

    return 0;
}
