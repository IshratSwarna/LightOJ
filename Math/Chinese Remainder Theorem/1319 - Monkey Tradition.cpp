#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mkp make_pair
#define pii pair<int,int>
#define pi acos(-1.0)
using namespace std;

ll modulo(ll g, ll a)
{
    ll x=0, y=1, u=1, v=0;
    ll q,r,m,n;
    while(a!=0){
        q = g/a; r= g%a;
        g=a; a=r;
        m=x-u*q; n= y-v*q;
        x=u; y=v;
        u=m; v=n;
    }
    return y;
}

int main()
{
    int t,T;
    ll p,nn,L;
    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        scanf("%lld",&p);
        ll n[p+2], a[p+2], N[p+2],Y[p+2];
        nn=1;
        for(ll i=1;i<=p;i++){
            scanf("%lld%lld",&n[i],&a[i]);
            nn *= n[i];
        }
        L=0;
        for(ll i=1;i<=p;i++){
            N[i] = nn/n[i];
            Y[i] = modulo(N[i],n[i]);
            //cout<<Y[i]<<N[i]<<endl;
            L += (a[i]*N[i]*Y[i]);
            //cout<<L<<endl;
            L = L % nn;
        }
        if(L<0)
            L += nn;
        printf("Case %d: %lld\n",t,L);
    }
    return 0;
}

