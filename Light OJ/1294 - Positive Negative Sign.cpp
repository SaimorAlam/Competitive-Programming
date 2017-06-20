#include<stdio.h>
int main()
{
    long long int t,n,m,ans,cas=1;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&n,&m);
        if (n<2 || m<1 || (n%(2*m)!=0)) return 0;
        ans=(n*m)/2;
        printf("Case %lld: %lld\n",cas++,ans);
    }
    return 0;

}
