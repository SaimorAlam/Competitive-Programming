#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,r1,c1,r2,c2,k;
    while(scanf("%d",&n)==1)
    {
        for(k=1;k<=n;k++)
        {
            scanf("%d %d %d %d",&r1,&c1,&r2,&c2);
            if(((r1+c1)-(r2+c2))%2!=0) printf("Case %d: impossible\n",k);
            else if(r1==r2&&c1==c2) printf("Case %d: 0\n",k);
            else if(abs(r1-r2)==abs(c1-c2)) printf("Case %d: 1\n",k);
            else printf("Case %d: 2\n",k);
        }
        break;
    }
    return 0;
}
