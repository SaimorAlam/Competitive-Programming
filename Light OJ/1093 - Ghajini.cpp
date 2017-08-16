#include<bits/stdc++.h>
#define tlop(i,a,b) for(int i=a;i<=b;i++)
#define lop(i,a,b) for(int i=a;i<b;i++)
#define mx (int)1e5+7
using namespace std;

struct type{
    int lo,hi;
};
type tree[2*mx];

void build(int n){
    for(int i=n-1;i>0;--i){
        tree[i].lo=min(tree[i<<1].lo,tree[i<<1|1].lo);
        tree[i].hi=max(tree[i<<1].hi,tree[i<<1|1].hi);
    }
}

int query(int l,int r,int n){
    int low=INT_MAX,high=INT_MIN;
    for(l+=n,r+=n;l<=r;l=(l+1)/2,r=(r-1)/2){
        if(l&1)low=min(tree[l].lo,low),high=max(tree[l].hi,high);
        if(!(r&1))low=min(tree[r].lo,low),high=max(tree[r].hi,high);
    }
    return high-low;
}

int main()
{
    int t,n,d,in,res;
    scanf("%d",&t);
    tlop(tc,1,t){
        res=-1;
        scanf("%d%d",&n,&d);
        lop(i,0,n){
            scanf("%d",&in);
            tree[i+n].hi=tree[i+n].lo=in;
        }
        build(n);
        for(int i=0;i<=n-d;i++){
            int l=i,r=i+d-1;
            if(r>n-1) r=n-1;
            res=max(query(l,r,n),res);
        }
        printf("Case %d: %d\n",tc,res);
    }
    return 0;
}
