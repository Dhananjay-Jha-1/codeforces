#include <stdio.h>

int main(void)
{
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n]; 
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    int m_turns = 0, output;

    for(int i = 0; i < n; i++)
    {
        int turns = a[i] / m;
        if(a[i] % m != 0)
            turns++;

        // now finding the child which has the max turns or how many times did he come to front
        if(turns >= m_turns)
        {
            m_turns = turns;
            output = i + 1;
        }
    }
    printf("%d", output);

    return 0;
}
