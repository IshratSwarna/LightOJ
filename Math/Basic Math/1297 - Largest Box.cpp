#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mkp make_pair
#define pii pair<int,int>
#define pi acos(-1.0)
using namespace std;

int main()
{
    int t;
    double x,v,l,w;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%lf%lf",&l,&w);
        x = ((w+l) - sqrt(w*w + l*l - w*l))/6.0;
        v = x*(w - 2*x)*(l - 2*x);
        printf("Case %d: %lf\n",i,v);
    }
    return 0;
}


