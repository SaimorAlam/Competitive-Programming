#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t,b;
    ll tmp,j;
    string a;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>a;
        cin>>b;
        tmp=0;
        if(a[0]=='-') j=1;
        else j=0;
        int l=a.length();
        for(;j<l;j++){
            tmp=tmp*10+(a[j]-'0');
            tmp%=b;
        }
        if(tmp==0) printf("Case %d: divisible\n",i);
        else printf("Case %d: not divisible\n",i);
    }
    return 0;
}
