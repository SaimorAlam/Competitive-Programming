#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,c,k,tally;
    cin>>t;
    for(int i=1;i<=t;i++){
        tally=0;
        scanf("%d", &n);
        for (c=31;c>=0;c--){
            k=n >> c;
            if (k & 1) tally++;
          }
          if(tally & 1) printf("Case %d: odd\n",i);
          else printf("Case %d: even\n",i);
      }
  return 0;
}
