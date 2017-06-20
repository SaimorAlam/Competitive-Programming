#include<bits/stdc++.h>
#define read freopen("in1.txt","r",stdin)
#define tlop(i,a,b) for(unsigned int i=a;i<=b;i++)
#define lop(i,a,b) for(unsigned int i=a;i<b;i++)
using namespace std;

int main()
{
    //read;
    int t,Ox,Oy,Ax,Ay,Bx,By;
    double d,r,res;
    cin>>t;
    tlop(i,1,t){
        cin>>Ox>>Oy>>Ax>>Ay>>Bx>>By;
        res=d=r=0.0;
        r=sqrt(pow((Ox-Ax),2)+pow((Oy-Ay),2));
        d=sqrt(pow((Ax-Bx),2)+pow((Ay-By),2));
        res=acos(1-0.5*pow((d/r),2));//theorem it has alternate also
        res*=r;
        printf("Case %d: %.8lf\n",i,res);
    }
    return 0;
}
