#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int t,n,m,mov,temp;
    cin>>t;
    for(int i=1;i<=t;i++){
        n=m=mov=temp=0;
        scanf("%d %d",&n,&m);
        if(n>m) swap(n,m);
        temp=m*n;
        if(n==1||m==1) mov=temp;
        else if((n==2||m==2)&& m%2==1) mov=m+1;
        else if((n==2||m==2)&& m%2==0){
            if((m/2)%2==0) mov=(temp/2);
            else mov=n+m;
        }
        else mov=(temp+1)/2;
        printf("Case %d: %d\n",i,mov);
    }
    return 0;
}
