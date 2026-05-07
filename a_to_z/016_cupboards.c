#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int l, r;
    
    int temp_n = n;
    int count_l = 0, count_r = 0, count_l1 = 0, count_r1 = 0, count_tl = 0, count_tr = 0;

    while(temp_n--)       
    {
        scanf("%d %d", &l, &r);

        if(l == 0)       count_l++;
        if(l == 1)       count_l1++;
        if(r == 0)       count_r++;
        if(r == 1)       count_r1++;
    }
    
    if(count_l > count_l1)     //if freq of 0 is more than 1, count_tl = no of zero 
        count_tl = count_l1;
    else
        count_tl = count_l;
    if(count_r > count_r1)
        count_tr = count_r1;
    else
        count_tr = count_r;

    printf("%d", count_tl + count_tr);
}
