/*
Process:
1.Find the area of Square and Circle
2.Then subtract area of circle form square and you will find the result.
*/
#include<bits/stdc++.h>
using namespace std;
const double pi=acos(-1.);
int main()
{
    int t;
    scanf("%d",&t);
    double r,square,circle,area;
    for(int i=1;i<=t;i++){
        square=circle=area=0;
        scanf("%lf",&r);
        square=(2*r)*(2*r);
        circle=pi*r*r;
        area=square-circle;
        printf("Case %d: %.2lf\n",i,area);
    }
    return 0;
}
