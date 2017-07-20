#include<bits/stdc++.h>
#define tlop(i,a,b) for(int i=a;i<=b;i++)
#define lop(i,a,b) for(int i=a;i<b;i++)
#define read freopen("in.txt","r",stdin)
#define write freopen("out.txt","w",stdout)
using namespace std;

int main()
{
    //read;write;
    int t,n,cnt,pl;
    char in;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d",&n);
        cnt=0,pl=0;
        for(int j=0;j<n;j++){
            cin>>in;
            if(in=='.'&j==pl) cnt++,pl+=3;
            else if(j==pl) pl++;
        }
        printf("Case %d: %d\n",i,cnt);
    }
    return 0;
}
