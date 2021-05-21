#include<stdio.h>
int main(void) 
{
    long int test;
    scanf("%ld", &test);
    while(test--)
    {
        long int n,b=0;
        scanf("%ld", &n);
        long int a[n], i, count = 0, sum = 0;
        for(i = 0;i < n;i++)
        scanf("%ld", &a[i]);
        for(i = 0;i < n;i++) 
        {
        if(a[i] == 1)
            sum++;
        else if(a[i] == -1)
            count++;
        else if(a[i] != 0)
            b++;
        }
        if(b > 1)
            printf("no\n");
        else if(count > 0 && b == 1)
            printf("no\n");
        else if(count > 1 && sum == 0)
            printf("no\n");
        else
            printf("yes\n");
    }
    return 0;
}      
