#include<bits/stdc++.h>
#define read freopen("in.txt","r",stdin)
#define tloop(i,a,b) for(unsigned int i=a;i<=b;i++)
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
int binary(int n){
    int res=0,mul=1;
    while(n>0){
        res+=(n%2)*mul;
        mul*=10;
        n/=2;
    }
    return res;
}
int main()
{
    read;
    int t,da,db,dc,dd,ba,bb,bc,bd;
    cin>>t;
    tloop(i,1,t){
        scanf("%d.%d.%d.%d",&da,&db,&dc,&dd);
        scanf("%d.%d.%d.%d",&ba,&bb,&bc,&bd);
        da=binary(da);
        db=binary(db);
        dc=binary(dc);
        dd=binary(dd);
        if(da==ba&&db==bb&&dc==bc&&dd==bd) printf("Case %d: Yes\n",i);
        else printf("Case %d: No\n",i);
    }
    return 0;
}

