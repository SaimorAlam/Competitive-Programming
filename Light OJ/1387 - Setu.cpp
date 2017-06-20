#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,tmp,num;
    char s[20];
    cin>>t;
    for(int i=1;i<=t;i++){
        printf("Case %d:\n",i);
        cin>>n;
        tmp=num=0;
        for(int j=0;j<n;j++){
            scanf("%s",&s);
            if(s[0]=='d'){
                scanf("%d",&num);
                tmp+=num;
            }
            if(s[0]=='r') cout<<tmp<<endl;
        }
    }
    return 0;
}
