/**
* http://www.had2know.com/academics/inner-circular-ring-radii-formulas-calculator.html
* Formula: r = Rsin(π/n)/[1 + sin(π/n)].  //for inner circle radius
* Formula: R = R = r[1 + sin(π/n)]/sin(π/n).  //for outer circle radius
*/
#include<bits/stdc++.h>
#define pi acos(-1.)
using namespace std;

int main()
{
    int t,n;
    double R,r;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>R>>n;
        r=(R*sin(pi/n))/(1+(sin(pi/n)));
        printf("Case %d: %.10f\n",i,r);
    }
    return 0;
}
