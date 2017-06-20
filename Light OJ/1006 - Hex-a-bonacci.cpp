#include<bits/stdc++.h>
#define MOD 10000007
#define mx 10000+10
#define read freopen("in.txt","r",stdin)
using namespace std;
long long int a, b, c, d, e, f,dp[mx];
long long int fn( long long int n ) {
    if( n == 0 ) return a;
    if( n == 1 ) return b;
    if( n == 2 ) return c;
    if( n == 3 ) return d;
    if( n == 4 ) return e;
    if( n == 5 ) return f;
    if(dp[n]!=-1) return dp[n];
    return dp[n]=( (fn(n-1)%MOD) + (fn(n-2)%MOD)+ (fn(n-3)%MOD) + (fn(n-4)%MOD) + (fn(n-5)%MOD) + (fn(n-6)%MOD) );
}
int main()
{
    //read;
    int t;
    long long int n;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>a>>b>>c>>d>>e>>f>>n;
        memset(dp,-1,sizeof(dp));
        printf("Case %d: %lld\n",i,fn(n)%MOD);
        a=b=c=d=e=f=n=0;
    }
    return 0;
}
