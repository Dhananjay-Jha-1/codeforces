#include <stdio.h>
#define MAX_SIZE 100

int main(void)
{
    int n;

    printf("Enter the number of words to be taken as input : ");
    scanf("%d", &n);

    char ch[MAX_SIZE];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < MAX_SIZE; j++)
        {
            int c = getchar();
            
         
}
