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
    ll w, p, q, r ;
    for(int t=1;t<=T;t++){
        scanf("%lld",&w);
        if(w%2 != 0){
            printf("Case %d: Impossible\n",t);
        }
        else{
            p = w/2;
            for(ll i=2; i<=p; i+=2){
                if(w%i == 0)
                    q = w/i;
                if(q%2 != 0){
                    r = i; break;
                }
            }
            printf("Case %d: %lld %lld\n",t,q,r);
        }
    }
    return 0;
}

