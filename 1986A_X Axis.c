#include <stdio.h>
#include <stdlib.h>
int main()
{
    long long int t;
    scanf("%lld",&t);
    while(t--)
    {
        int x,y,z;
        scanf("%d %d %d",&x,&y,&z);
        int a,b,c;
        int fa=100;
        int arr[11];
        arr[0]=0;
        int i=0;
        for(i=1;i<=10;i++)
        {
            a=abs(x-i);
            b=abs(y-i);
            c=abs(z-i);
            arr[i]=a+b+c;
        }
        for(i=1;i<=10;i++)
        {
            if(arr[i]<fa)
            {fa=arr[i];}
            else{continue;}
        } 
        printf("%d\n", fa);
    }
    return 0;
}