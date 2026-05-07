#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
     
    int arr[7], i = 0;
    for(int i = 0; i < 7; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(;;)
    {
        n = n - arr[i];
       
        if(n <= 0)
            break;
        
        i++;
        if( i >= 7)
            i = i % 7;
    }
    int answer = i + 1;

    if(answer > 7)
        answer = answer % 7;

    printf("%d", answer);
    
    return 0;

}
