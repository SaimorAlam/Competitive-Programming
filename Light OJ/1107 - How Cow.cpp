#include<stdio.h>

int main()
{
    int n,x1,y1,x2,y2,i,x,y,j;
    while(scanf("%d",&n)==1)
    {
        for(j=1;j<=n;j++)
        {
            printf("Case %d:\n",j);
            scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
            int m,flag=0,flag1=0;
            scanf("%d",&m);
            for(i=1;i<=m;i++)
            {
                scanf("%d %d",&x,&y);
                if((x>x1&&x<x2)&&(y>y1&&y<y2)) printf("Yes\n");
                else printf("No\n");
            }
        }
        break;
    }
    return 0;
}
