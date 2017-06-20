#include<bits/stdc++.h>
#define read freopen("in.txt","r",stdin)
#define tlop(i,a,b) for(unsigned int i=a;i<=b;i++)
#define int_lim 10e8
#define LL long long
using namespace std;

int main()
{
    //read;    ///comment out it when submit.
    int n,tc;
    vector<char> st;
    while(scanf("%d",&tc)==1){
        tlop(t,1,tc){
            cin>>n;
            while(n){
                (n%2==0)? st.push_back('0'):st.push_back('1');
                n>>=1;
            }
            st.push_back('0');
            reverse(st.begin(),st.end());
            next_permutation(st.begin(),st.end());
            LL ans=0;int k=1;
            for(int i=st.size()-1;i>=0;i--) ans+=(st[i]-'0')*k,k*=2;
            printf("Case %d: %lld\n",t,ans);
            st.clear();
        }
    }
    return 0;
}
