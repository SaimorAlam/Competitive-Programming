#include<bits/stdc++.h>
#define read freopen("in.txt","r",stdin)
#define write freopen("out.txt","w",stdout)
#define tlop(i,a,b) for(unsigned int i=a;i<=b;i++)
#define loop(i,a,b) for(unsigned int i=a;i<b;i++)

using namespace std;

int main()
{
    read;
    write;
    int t;
    string cmd,in;
    cin>>t;
    tlop(z,1,t){
        in="http://www.lightoj.com/";
        stack<string> fstak,bstak;
        cout<<"Case "<<z<<":"<<endl;
        bstak.push(in);
        while(cin>>cmd){
            if(cmd=="QUIT") break;
            else if(cmd=="VISIT"){
                cin>>in;
                cout<<in<<endl;
                bstak.push(in);
                if(!fstak.empty())
                    while(!fstak.empty()) fstak.pop();
            }else if(cmd=="FORWARD"){
                if(!fstak.empty()){
                    bstak.push(fstak.top());
                    cout<<fstak.top()<<endl;
                    fstak.pop();
                }else cout<<"Ignored\n";
            }else if(cmd=="BACK"){
               if(!bstak.empty()) {
                    fstak.push(bstak.top());
                    bstak.pop();
                    if(!bstak.empty()) cout<<bstak.top()<<endl; ///without checking empty give error.
                    else {
                        cout<<"Ignored\n";
                        bstak.push(fstak.top());
                        fstak.pop();
                    }
               }else cout<<"Ignored\n";
            }
        }
    }
    return 0;
}
