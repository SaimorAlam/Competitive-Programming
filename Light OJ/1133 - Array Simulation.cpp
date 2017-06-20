#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,m,ad,md,dk,py,pz;
    char op;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n>>m;
        int ar[n+10],tmpar[n+10];
        for(int j=0;j<n;j++){
            cin>>ar[j];
            tmpar[j]=ar[j];
        }
        for(int j=0;j<m;j++){
            cin>>op;
            if(op=='P'){
                cin>>py>>pz;
                int tmp=ar[py];
                ar[py]=ar[pz];
                ar[pz]=tmp;
            }
            else if(op=='S'){
                cin>>ad;
                for(int j=0;j<n;j++) ar[j]+=ad;
            }
            else if(op=='M'){
                cin>>md;
                for(int j=0;j<n;j++) ar[j]*=md;
            }
            else if(op=='D'){
                cin>>dk;
                for(int j=0;j<n;j++) ar[j]/=dk;
            }
            else if(op=='R'){
                int l=n;
                if(l%2==0) l/=2;
                else l=(l/2)+1;
                for(int j=0,k=n-1;j<l;j++,k--){
                    int tmp=ar[k];
                    ar[k]=ar[j];
                    ar[j]=tmp;
                }
            }
        }
        printf("Case %d:\n",i);
        for(int i=0;i<n;i++){
            printf("%d",ar[i]);
            if(i<n-1) cout<<" ";
        }cout<<endl;
    }
    return 0;
}
