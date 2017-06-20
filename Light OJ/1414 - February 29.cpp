#include<bits/stdc++.h>
#define read freopen("in.txt","r",stdin)
#define write freopen("out.txt","w",stdout)
#define is_leap(n) ((n%4==0&&n%100!=0)||n%400==0) ? 1:0
using namespace std;

int main()
{
    //read;write;
    int t,d,d1,y,y1,sum,mn,mn1;
    char m[12],m1[12];
    char month[12][12]={"January","February","March","April","May","June","July","August","September","October",
    "November","December"};
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%s %d, %d",m,&d,&y);
        scanf("%s %d, %d",m1,&d1,&y1);
        sum=mn=mn1=0;
        for(int j=0;j<=12;j++) if(strcmp(m,month[j])==0) {mn=j;break;}
        for(int j=0;j<=12;j++) if(strcmp(m1,month[j])==0) {mn1=j;break;}
        sum = (y1/4 - y1/100 + y1/400) - (y/4 - y/100 + y/400);
        if(mn<=1 && is_leap(y)) sum++;
        if(mn1<1 && is_leap(y1)) sum--;
        if(mn1==1 && is_leap(y1)){
            if(d1==29)sum++;
            if(y==y1||d==d1||d1<29) sum--;
        }
        printf("Case %d: %d\n",i,sum);
    }
    return 0;
}
