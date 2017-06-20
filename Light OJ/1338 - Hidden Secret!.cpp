#include<bits/stdc++.h>
#define read freopen("in.txt","r",stdin)
#define tlop(i,a,b) for(unsigned int i=a;i<=b;i++)
#define lop(i,a,b) for(unsigned int i=a;i<b;i++)
#define sl strlen
#define mx 100+7
using namespace std;

int main()
{
    //read;
    char nm1[mx],nm2[mx];
    int t;
    cin>>t;
    getchar();
    tlop(i,1,t){
        gets(nm1);
        gets(nm2);
        int nl=sl(nm1);
        int ml=sl(nm2);
        int j=0;
        lop(i,0,nl){
            if(nm1[i]==' ') continue;
            else if(nm1[i]>='A'&&nm1[i]<='Z')nm1[j++]=nm1[i]+32;
            else nm1[j++]=nm1[i];
        }
        nm1[j]='\0';
        int k=0;
        lop(i,0,ml){
            if(nm2[i]==' ') continue;
            else if(nm2[i]>='A'&&nm2[i]<='Z') nm2[k++]=nm2[i]+32;
            else nm2[k++]=nm2[i];
        }
        nm2[k]='\0';
        int c=0,c1=0;
        lop(p,0,j) c+=nm1[p];
        lop(p,0,k) c1+=nm2[p];
        if(c==c1) printf("Case %d: Yes\n",i);
        else printf("Case %d: No\n",i);
    }
    return 0;
}
