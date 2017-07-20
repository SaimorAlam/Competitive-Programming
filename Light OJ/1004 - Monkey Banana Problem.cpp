#include<bits/stdc++.h>
#define tlop(i,a,b) for(unsigned int i=a;i<=b;i++)
#define lop(i,a,b) for(unsigned int i=a;i<b;i++)
#define read freopen("in.txt","r",stdin)
#define write freopen("out.txt","w",stdout)
#define mset(var) memset(var,-1,sizeof(var))
#define mx 220

using namespace std;
int in[mx][mx],dp[mx][mx];
int n=0;
int mxbanana(int i,int j){
    if(in[i][j]==-1) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int ret=in[i][j];
    if(i>n) ret+=max(mxbanana(i-1,j),mxbanana(i-1,j+1));
    else{
        if(j-1>=0) ret+=max(mxbanana(i-1,j),mxbanana(i-1,j-1));
        else ret+=mxbanana(i-1,j);
    }
    return dp[i][j]=ret;
}
int main()
{
    //read;
    int t,c,maxx;
    cin>>t;
    tlop(z,1,t){
        cin>>n;
        c=2*n-1;
        maxx=0;
        mset(in);mset(dp);
        lop(i,1,n)
            tlop(j,1,i) cin>>in[i][j];
        lop(i,n,c+1)
            tlop(j,1,c+1-i) cin>>in[i][j];
        int maxx=in[c][1];
        maxx+=max(mxbanana(c-1,1),mxbanana(c-1,2));
        printf("Case %d: %d\n",z,maxx);
    }
    return 0;
}
