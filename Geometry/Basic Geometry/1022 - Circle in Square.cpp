#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mkp make_pair
#define pii pair<int,int>
using namespace std;

int main()
{
    int T;
    double pi = 2 * acos (0.0);
    double r,ans;
    scanf("%d",&T);
    for(int t=1;t<=T;t++){
        ans = 0.000000001;
        scanf("%lf",&r);
        ans += ((4*r*r) - (pi*r*r));
        printf("Case %d: %.2f\n",t,ans);
    }
    return 0;
}
