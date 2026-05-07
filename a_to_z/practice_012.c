/****************You are given n tasks. The i-th task requires a[i] units of work.

Initially, the tasks are arranged in a queue in order from 1 to n.

You process tasks using the following procedure:

Take the task at the front of the queue
Process m units of work from it
If the task still has remaining work (> 0), move it to the end of the queue
Otherwise, the task is completed and removed from the queue

This process continues until all tasks are completed.

Your task

Determine which task is being processed at the exact moment when the last task gets completed. *************/

#include <stdio.h>

int main(void)
{
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // alright so every element has m units of work to complete, if completed they out otherwise they at end

    int max = 0, output;
    for(int i = 0; i < n; i++)
    {
        int times_at_front = arr[i] / m;

        if(arr[i] % m != 0)
            times_at_front++;

        // now finding the process which has the max time at the front cuz that is the last finished task

        if(times_at_front >= max)
        {
            max = times_at_front;
            output = i + 1;
        }
    }
    printf("%d", output);
}
