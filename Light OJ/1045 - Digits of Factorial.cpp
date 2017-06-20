#include<bits/stdc++.h>
#define read freopen("in.txt","r"<stdin)
#define tlop(i,a,b) for(unsigned int i=a;i<=b;i++)
#define lop(i,a,b) for(unsigned int i=a;i<=b;i++)
#define LL long long
#define mx 1000000+10
using namespace std;
double f[mx];
int main()
{
    int t;
    LL n,b;
    cin>>t;
    tlop(i,1,mx) f[i]=log(i)+f[i-1];
    tlop(z,1,t){
        cin>>n>>b;
        cout<<"Case "<<z<<": "<<(long)(f[n]/(f[b]-f[b-1])+1)<<endl;
    }
}
