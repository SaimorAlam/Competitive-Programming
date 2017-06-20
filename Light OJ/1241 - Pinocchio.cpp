#include<bits/stdc++.h>
#define read freopen("pinico_in.txt","r",stdin)
#define lop(i,a,b) for(unsigned int i=a;i<b;i++)
#define tlop(i,a,b) for(unsigned int i=a;i<=b;i++)
#define cs(i,c) printf("Case %d: %d\n",i,c)
#define write freopen("out.txt","w",stdout)
using namespace std;

int main() {
    //read;
    int T,n,lie,i,a[12],t=0;
    a[0]=2;
    scanf("%d",&T);
    while(T--) {
        scanf("%d",&n);
        for(i=1; i<=n; i++) {
            scanf("%d",&a[i]);
        }
        for(i=0,lie=0; i<n; i++) {
            if(a[i+1]>=a[i])lie+=ceil(((double)a[i+1]-a[i])/5);
        }
        printf("Case %d: %d\n",++t,lie);
    }

    return 0;
}
