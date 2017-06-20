/**
*4->move from 1 to another,3->open or close,5->enter or exit
*1 -> 2
*4+3+5+3+4+3+5
*3 ->10
*5 ->5
*10 ->3=87
*
*/
#include<stdio.h>
int main()
{
    int t,n,m;
    int c=1;
    scanf("%d",&t);
    while(t--)
    {
        int cont=0,total=0;
        scanf("%d %d",&n,&m);
        if(n<0)
            return 0;
        if(n<=m)
        {
            for(int i=0;i<m;i++)
            {
                cont+=4;
            }
        }
        else
        {
            for(int i=0;i<(n-m)+n;i++)
            {
                cont+=4;
            }
        }
        total=cont+19;
        printf("Case %d: %d\n",c++,total);
    }
    return 0;
}
