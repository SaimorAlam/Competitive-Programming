#include<bits/stdc++.h>
#define tlop(i,a,b) for(unsigned int i=a;i<=b;i++)
using namespace std;
int solve(int n){
    if(!n) return 0;    //if (!n) means n==0
    int res=(n/3)*2;
    if(n%3==2) res++;
    return res;
}
int main()
{
    int t,a,b;
    cin>>t;
    tlop(i,1,t)
        scanf("%d %d",&a,&b),printf("Case %d: %d\n",i,solve(b)-solve(a-1));
    return 0;
}
