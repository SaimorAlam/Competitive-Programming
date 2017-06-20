#include<bits/stdc++.h>
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
using namespace std;

int main()
{
    int t;
    long long a,b,c;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>a>>b>>c;
        a*=a;b*=b;c*=c;
        if((a+b==c)||(a+c==b)||(b+c==a)) printf("Case %d: yes\n",i);
        else printf("Case %d: no\n",i);
    }
    return 0;
}
