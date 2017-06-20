#include<bits/stdc++.h>
#define read freopen("in.txt","r",stdin)
#define tlop(i,a,b) for(unsigned int i=a;i<=b;i++)
#define lop(i,a,b) for(unsigned int i=a;i<b;i++)
#define pi acos(-1.0)
using namespace std;
int main()
{
    //read;
    int t;
    double r1,r2,r3,a,b,c,anA,anB,anC,r1sec,r2sec,r3sec,A,s,res;
    cin>>t;
    tlop(i,1,t){
        cin>>r1>>r2>>r3;
        a=r2+r3;
        b=r1+r3;
        c=r2+r1;
        s=(a+b+c)/2.0;
        A=sqrt(s*(s-a)*(s-b)*(s-c));

        anA=acos((b*b+c*c-a*a)/(2*b*c));
        anB=acos((a*a+c*c-b*b)/(2*a*c));
        anC=acos((a*a+b*b-c*c)/(2*a*b));

        r1sec=0.5*(r1*r1)*anA;
        r2sec=0.5*(r2*r2)*anB;
        r3sec=0.5*(r3*r3)*anC;
        res=A-(r1sec+r2sec+r3sec);
        printf("Case %d: %.08lf\n",i,res);
    }
    return 0;
}
