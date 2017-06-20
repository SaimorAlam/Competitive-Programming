#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[20];
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        scanf("%s",&str);
        int tally=0,l=strlen(str);
        for(int j=0,k=l-1;j<l;j++,k--){
            if(str[j]==str[k]) tally++;
        }
        if(tally==l) printf("Case %d: Yes\n",i);
        else printf("Case %d: No\n",i);
    }
    return 0;
}
