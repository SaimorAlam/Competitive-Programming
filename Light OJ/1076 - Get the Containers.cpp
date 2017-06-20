#include<bits/stdc++.h>
#define mx 1000+7
#define lop(i,a,b) for(int i=a;i<b;i++)
#define read freopen("in.txt","r",stdin)
#define write freopen("out.txt","w",stdout)
using namespace std;
int BinarySearch(int ar[],int low,int high,int n,int key){
    int mid;
    while(low<=high){
        mid=low+(high-low)/2;
        if(low==high) break;
        int cnt=1,sum=0;
        for(int i=0;i<n;i++){
            if(sum+ar[i]<=mid) sum+=ar[i];
            else cnt++,sum=ar[i];
        }
        if(cnt>key) cnt=0,low=mid+1;
        else cnt=0,high=mid;
    }
    return mid;
}
int main()
{
    //read;write;
    int t,n,c,in[mx];
    scanf("%d",&t);
    for(int ti=1;ti<=t;ti++){
        int low=-1,high=0;
        scanf("%d%d",&n,&c);
        for(int ni=0;ni<n;ni++){
            scanf("%d",&in[ni]);
            low=max(low,in[ni]);
            high+=in[ni];
        }
        int res=BinarySearch(in,low,high,n,c);
        printf("Case %d: %d\n",ti,res);
    }
    return 0;
}
