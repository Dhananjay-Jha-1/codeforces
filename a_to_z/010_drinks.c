#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    
    int* pi = (int*) malloc(n * sizeof(int));

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &pi[i]);
    }
    
    int x = 100;    // x ml per drink
    int count = 0;

    double volume = 0.0, vol;

    for(int i = 0; i < n; i++)
    {
        vol = ((double)pi[i]/100.0) * x;    // vol = (50/100) * 100 = 50  , vol = (50/100) * 100 = 50
        volume += vol;            // volume = 50 + 50 + 100 = 200   now have to divide it by 300
        count++;
    }

    volume = volume / (count * x);    // volume = 200 / (3*100) = 200/300 = 0.666667

    volume  = volume * 100;          
        
    printf("%.12f", volume);
    
    free(pi);
    pi = NULL;

    return 0;
}
