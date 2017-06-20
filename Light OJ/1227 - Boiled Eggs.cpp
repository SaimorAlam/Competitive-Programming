#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,p,q,tmp,k;
    int wgm[35];
    cin>>t;
    for(int i=1;i<=t;i++){
        scanf("%d %d %d",&n,&p,&q);
        tmp=k=0;
        for(int j=0;j<n;j++) cin>>wgm[j];
        for(int l=0;l<n&&l<p;l++){
            tmp+=wgm[l];
            if(tmp>q) break;
            k++;
        }
        printf("Case %d: %d\n",i,k);
    }
    return 0;
}
