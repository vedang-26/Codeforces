#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    long long int t;
    scanf("%lld", &t);
    while (t--)
    {
        long long int n;
        scanf("%lld", &n);
        long long int a[n];
        
        for (long long int i = 0; i < n; i++)
        {
            scanf("%lld", &a[i]);
        }
        
        long long int sum = 0;
        for (long long int i = 0; i < n; i++)
        {
            sum += a[i];
        }
        
        double sqrt_sum = sqrt((double)sum);
        long long int sqrt_sum_int = (long long int)sqrt_sum;
        
        if (sqrt_sum_int * sqrt_sum_int == sum)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
