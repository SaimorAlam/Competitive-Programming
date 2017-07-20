#include<bits/stdc++.h>
#define mx 1000+7
#define tlop(i,a,b) for(int i=a;i<=b;i++)
#define lop(i,a,b) for(int i=a;i<b;i++)
#define FCIN ios_base::sync_with_stdio(0);cin.tie(0)
#define read freopen("in.txt","r",stdin)
#define write freopen("out.txt","w",stdout)

using namespace std;

int BinarySearch(int ar[],int low,int high,int n,int key){
    int mid;
    while(low<=high){
        mid=low+(high-low)/2;
        if(low==high) break;
        int cnt=1,sum=0;
        for(int i=0;i<=n;i++){
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
    FCIN;
    int t,n,k,low,high,in[mx];
    cin>>t;
    tlop(ti,1,t){
        cin>>n>>k;
        low=-1,high=0;
        tlop(ni,0,n){
            cin>>in[ni];
            low=max(low,in[ni]);
            high+=in[ni];
        }
        int res=BinarySearch(in,low,high,n,++k);
        printf("Case %d: %d\n",ti,res);
        int cnt=k,cur=0;
        tlop(i,0,n){
            cur+=in[i];
            if(cur>res||n-i+2==cnt){
                cnt--;
                cur-=in[i];
                printf("%d\n",cur);
                cur=in[i];
            }
        }
        printf("%d\n",cur);
    }
    return 0;
}
