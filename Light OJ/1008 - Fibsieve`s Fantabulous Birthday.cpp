#include <bits/stdc++.h>
#define tlop(i,a,b) for(unsigned int i=a;i<=b;i++)
#define ll long long
using namespace std;
int main()
{
    int t;
    ll s,n,c,r;
    cin>>t;
    tlop(i,1,t){
        cin>>s;
        n=ceil(sqrt(double(s)));
        if(n*n-s<n) c=n,r=n*n-s+1;
        else c=-n*n+2*n+s-1,r=n;
        if(n&1) swap(c,r);
        printf("Case %d: %lld %lld\n",i,c,r);
    }
    return 0;
}
