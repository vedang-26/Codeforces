#include <stdio.h>
#include <math.h>
int dist(int x1,int x2,int y1,int y2)
{
    int z = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
    double z1 = sqrt(z);
    return z1;
}
int main()
{
    long long int t;
    scanf("%lld", &t);
    while (t--)
    {   long long int area;
        long long int x[4],y[4];
        int i=0;
        int j=0;
        for(i=0;i<4;i++)
        {
            scanf("%lld %lld", &x[i], &y[i]);
        }
        long long int dist1[6];
        dist1[0] = dist(x[0],x[1],y[0],y[1]);
        dist1[1] = dist(x[0],x[2],y[0],y[2]);
        dist1[2] = dist(x[0],x[3],y[0],y[3]);
        dist1[3] = dist(x[1],x[2],y[1],y[2]);
        dist1[4] = dist(x[1],x[3],y[1],y[3]);
        dist1[5] = dist(x[2],x[3],y[2],y[3]);
        long long int a,b;
        a = dist1[0];
        int count = 0;
        for(i=0;i<6;i++)
        {
            if(dist1[i]==a)
            {count+=1;}
        }
        if(count==2)
        {area = dist1[1]*dist1[1];}
        else{area = dist1[0]*dist1[0];}
        printf("%lld\n", area);
    }
    return 0;
}