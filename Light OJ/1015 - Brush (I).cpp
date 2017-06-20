#include<stdio.h>
int main()
{
    int t,n,m,sum,i,j;
    while(scanf("%d",&t)==1)
    {
        for(j=1;j<=t;j++)
        {
        sum=0;
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%d",&m);
            if(m<=0) m=0;
            sum+=m;
        }
        printf("Case %d: %d\n",j,sum);
        }
        break;
    }
    return 0;
}
