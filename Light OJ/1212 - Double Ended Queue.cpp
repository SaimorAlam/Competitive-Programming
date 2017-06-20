#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,data,tcas=0;
    cin>>t;
    while(t--){
        cout<<"Case "<<++tcas<<":"<<endl;
        cin>>n>>m;
        deque<int> Q;
        string S;
        for(int i=1;i<=m;i++){
        cin>>S;
        if(S=="pushLeft"){
            cin>>data;
            if(Q.size()!=n)
                {
                    Q.push_front(data);
                    cout<<"Pushed in left: "<<data<<endl;
                }
            else cout<<"The queue is full"<<endl;
        }
        else if(S=="pushRight"){
            cin>>data;
            if(Q.size()!=n)
                {
                    Q.push_back(data);
                    cout<<"Pushed in right: "<<data<<endl;
                }
            else cout<<"The queue is full"<<endl;
        }
        else if(S=="popLeft"){
            if(Q.empty())cout<<"The queue is empty"<<endl;
            else
                {
                    cout<<"Popped from left: "<<Q.front()<<endl;
                    Q.pop_front();
                }
        }
        else if(S=="popRight"){
            if(Q.empty())cout<<"The queue is empty"<<endl;
            else
                {
                    cout<<"Popped from right: "<<Q.back()<<endl;
                    Q.pop_back();
                }
        }
        }
    }
    return 0;
}
