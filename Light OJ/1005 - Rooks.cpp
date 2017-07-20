#include<bits/stdc++.h>
#define tlop(i,a,b) for(unsigned int i=a;i<=b;i++)
#define LL long long
using namespace std;
LL dp[31][31];
LL ways(LL n,LL k){
    if(k==1) return n;
    if(n==k) return 1;
    if(dp[n][k]!=-1) return dp[n][k];
    return dp[n][k]=ways(n-1,k)+ways(n-1,k-1);
}
int main()
{
    int t;
    LL n,k,sum;
    cin>>t;
    tlop(z,1,t){
        memset(dp,-1,sizeof(dp));
        cin>>n>>k;
        if(n<k) printf("Case %d: 0\n",z);
        else if(k==0) printf("Case %d: 1\n",z);
        else if(k==1) printf("Case %d: %lld\n",z,n*n);
        else{
            sum=1;
            tlop(i,n-k+1,n) sum*=i;
            printf("Case %d: %lld\n",z,sum*ways(n,k));
        }
    }
    return 0;
}
