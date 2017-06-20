#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int t,Ax1,Ay1,Bx2,By2,Cx3,Cy3,Dx4,Dy4,area,cas=1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d %d %d %d",&Ax1,&Ay1,&Bx2,&By2,&Cx3,&Cy3);
        Dx4=Ax1+Cx3-Bx2;
        Dy4=Ay1+Cy3-By2;
        area=abs(Ax1*(By2-Cy3)+Bx2*(Cy3-Ay1)+Cx3*(Ay1-By2));
        printf("Case %d: %d %d %d\n",cas,Dx4,Dy4,area);
        cas++;
    }
}
