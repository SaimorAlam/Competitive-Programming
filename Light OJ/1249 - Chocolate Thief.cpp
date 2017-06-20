#include<bits/stdc++.h>
#define read freopen("in.txt","r",stdin)
#define lop(i,a,b) for(unsigned int i=a;i<b;i++)
#define tlop(i,a,b) for(unsigned int i=a;i<=b;i++)
#define write freopen("out.txt","w",stdout)
using namespace std;
struct type{
    int cube;
    string nm;
};
bool cmp(type a,type b){
    return a.cube<b.cube;
}
type var;
int main(){
    int tc,n,x,y,z;
    string s;
    //read;
    cin>>tc;
    tlop(t,1,tc){
    vector<type>sol;
        cin>>n;
        lop(i,0,n){
            cin>>s>>x>>y>>z;
            var.cube=x*y*z;
            var.nm=s;
            sol.push_back(var);
        }
        sort(sol.begin(),sol.end(),cmp);
        if(sol[0].cube==sol[sol.size()-1].cube) cout<<"Case "<<t<<": "<<"no thief"<<endl;
        else cout<<"Case "<<t<<": "<<sol[sol.size()-1].nm<<" took chocolate from "<<sol[0].nm<<endl;
    }
    return 0;
}
