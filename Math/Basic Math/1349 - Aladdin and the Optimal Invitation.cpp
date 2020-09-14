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
    ll m,n,q,Q;
    ll u,v,w;
    ll s,sum,rx,ry;
    for(int t=1;t<=T;t++)
    {
        scanf("%lld%lld%lld",&m,&n,&q);
        vector<ll>x(m+2,0),y(n+2,0);
        Q=q;
        sum=0; rx=0; ry=0;
        while(Q--){
            scanf("%lld%lld%lld",&u,&v,&w);
            x[u] += w; y[v] += w;
            sum += w;
        }
        s = 0;
        for(ll i=0;i<=m;i++){
            s+= x[i];
            if(((2*s) >= sum) || (i==m)){
                rx = i; break;
            }
        }
        s=0;
        for(ll i=0;i<=n;i++){
            s+= y[i];
            if(((2*s) >= sum) || (i==n)){
                ry = i; break;
            }
        }
        printf("Case %d: %lld %lld\n",t,rx,ry);
    }
    return 0;
}

