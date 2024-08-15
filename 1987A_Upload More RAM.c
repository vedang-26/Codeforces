#include <stdio.h>
int main()
{
    long long int t,n,k;
    long long int time;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&n,&k);
        if(n==1)
        {
            time=1;
        }
        else if(n==0)
        {
            time=0;
        }
        else
        {
            time = ((n-1)*k)+1;
        }
        printf("%lld\n",time);
    }
    return 0;
}