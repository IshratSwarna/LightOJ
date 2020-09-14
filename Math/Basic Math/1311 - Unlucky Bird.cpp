#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int T;
    double v1,v2,v3,a1,a2,t1,t2,t,s1,s2,d,db;
    scanf("%d",&T);
    for(int i=1;i<=T;i++){
        scanf("%lf%lf%lf%lf%lf",&v1,&v2,&v3,&a1,&a2);
        t1 = v1/a1;
        t2 = v2/a2;
        s1 = (v1*t1) - (0.5*a1*t1*t1);
        s2 = (v2*t2) - (0.5*a2*t2*t2);
        d = s1 + s2;
        t = max(t1,t2);
        db = v3*t;
        printf("Case %d: %f %f\n",i,d,db);
    }
    return 0;
}
