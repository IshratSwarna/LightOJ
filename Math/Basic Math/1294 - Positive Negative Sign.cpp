#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mkp make_pair
#define pii pair<int,int>
#define pi acos(-1.0)
using namespace std;

int main()
{
    int T;
    scanf("%d",&T);
    ll n,m,ps,mns,d,a;
    for(int t=1;t<=T;t++)
    {
        scanf("%lld%lld",&n,&m);
        mns = ((m+1)*m)/2;
        ps = ((m+1+(2*m))*m)/2;
        a = n/(2*m);
        d = a*(ps-mns);
        printf("Case %d: %lld\n",t,d);
    }
    return 0;
}


