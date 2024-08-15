#include <stdio.h>
int main()
{
    int a,b,c,max,t,j,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&a,&b,&c);
        for(i=0;i<5;i++)
        {
            if(a<b && a<c)
            {a++;}
            else if(b<a && b<c)
            {b++;}
            else if(c<a && c<b)
            {c++;}
            else if(a==b && a<c)
            {a++;}
            else if(a==c && a<b)
            {c++;}
            else if(b==c && b<a)
            {b++;}
            else{a++;}
    
        }
        max = a*b*c;
        printf("%d\n",max);
        }
    return 0;
}