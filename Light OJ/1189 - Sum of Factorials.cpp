#include<bits/stdc++.h>
#define tlop(i,a,b) for(unsigned int i=a;i<=b;i++)
#define lop(i,a,b) for(unsigned int i=a;i<b;i++)
#define read freopen("in.txt","r",stdin)
#define LL long long
#define mx 25
#define f_mx 20
using namespace std;
int main()
{
    //read;
    LL in,dp[mx];
    dp[0]=dp[1]=1;
    tlop(i,2,f_mx) dp[i]=dp[i-1]*i;     // pre-calculation end
    int t,k,out[mx];
    cin>>t;
    tlop(i,1,t){
        k=0;
        scanf("%lld",&in);
        printf("Case %d: ",i);
        for(int j=f_mx;j>=0 && in;j--)
            if(in>=dp[j]) in-=dp[j],out[k++]=j;
        if(in) in=-1;
        if(in<0) printf("impossible");
        else
            for(int m=k-1;m>=0;m--){
                printf("%d!",out[m]);
                if(m>0) printf("+");
            }
        cout<<endl;
    }
    return 0;
}
