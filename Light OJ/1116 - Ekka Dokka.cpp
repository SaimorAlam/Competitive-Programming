#include<bits/stdc++.h>
#define ulli unsigned long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        ulli w,n,m,tmp;
        cin>>w;
        tmp=w;
        if(tmp%2==0){
            while(tmp%2==0){
                tmp/=2;
            }
            n=tmp;
            m=w/n;
            printf("Case %d: %llu %llu\n",i,n,m);
        }else printf("Case %d: Impossible\n",i);
    }
    return 0;
}
