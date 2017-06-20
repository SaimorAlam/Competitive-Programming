#include<stdio.h>
#include<math.h>
#define PI acos(-1)
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int r1,r2,h,p;
        double v=0,r=0;
        scanf("%d %d %d %d",&r1,&r2,&h,&p);
        r=r2+(r1-r2)*(double(p)/h);
        v=(PI*p)/3*(r*r+r*r2+r2*r2);
        printf("Case %d: %lf\n",i,v);
    }
    return 0;
}
