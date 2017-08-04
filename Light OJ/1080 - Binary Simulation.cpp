#include<bits/stdc++.h>
#define FCIN ios_base::sync_with_stdio(0);cin.tie(0)
#define read freopen("in.txt","r",stdin)
#define write freopen("out.txt","w",stdout)
#define mx 100000+10
#define lft (idx<<1)
#define rgt ((idx<<1)|1)
#define hight(n) (int)(floor(log(n)/log(2)))    ///formula for hight of tree
using namespace std;
int lazy[2*mx]; ///since Iterative max node will be 2*n-1
int st[30]; ///mx hight of tree for int type

void build(int idx){
    while(idx>1){
        idx>>=1;
        if(lazy[idx]) lazy[lft]+=lazy[idx],lazy[rgt]+=lazy[idx],lazy[idx]=0;
    }
}

void lazy_update_without_propagation_iterative(int l,int r,int n){
    l+=n,r+=n;
    int l0=l,r0=r;
    for(;l<=r;l=(l+1)/2,r=(r-1)/2){
        if(l&1){
            if(l<n) lazy[l<<1]++,lazy[l<<1|1]++;
            else lazy[l]++;
        }if(!(r&1)){
            if(r<n) lazy[r<<1]++,lazy[r<<1|1]++;
            else lazy[r]++;
        }
    }
    build(l0);
    build(r0-1);
}

void Final_update_current_idx(int idx,int n){   ///single query function
    idx+=n;
    int hi=0;
    while(idx>1) idx>>=1,st[hi++]=idx;  ///making a path and hight of the tree for current index

    for(int i=hi-1;i>=0;i--){
        idx=st[i];
        if(lazy[idx]) lazy[lft]+=lazy[idx],lazy[rgt]+=lazy[idx],lazy[idx]=0;
    }
}

int main()
{

    //read;write;
    int t,q,len,st,en,qr;
    char cmd[3];
    char in[mx];
    scanf("%d",&t);
    for(int tc=1;tc<=t;tc++){
        memset(lazy,0,sizeof(lazy));
        scanf("%s",in);
        len=strlen(in);
        printf("Case %d:\n",tc);
        scanf("%d",&q);
        while(q--){
            scanf("%s",cmd);
            if(cmd[0]=='I'){
                scanf("%d %d",&st,&en);
                st--,en--;
                lazy_update_without_propagation_iterative(st,en,len);
            }else if(cmd[0]=='Q'){
                scanf("%d",&qr);
                qr--;
                Final_update_current_idx(qr,len);
                if(lazy[len+qr]%2==0) printf("%c\n",in[qr]);
                else{
                    if(in[qr]=='1') printf("0\n");
                    else printf("1\n");
                }
            }
        }
    }
    return 0;
}
