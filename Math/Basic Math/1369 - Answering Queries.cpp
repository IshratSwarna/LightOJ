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
    ll n,q,ans,Ln,Rn;
    int f;
    ll x,v,d;
    for(int t=1;t<=T;t++)
    {
        scanf("%lld%lld",&n,&q);
        ll ar[n+1];
        memset(ar,0,sizeof(ar));
        ans = 0;
        Ln = 0; Rn = n-1;
        for(ll i=0;i<n;i++){
            scanf("%lld",&ar[i]);
            ans += (-1*Ln*ar[i]) + (Rn*ar[i]);
            Ln++; Rn--;
        }
        //cout<<ans;
        printf("Case %d:\n",t);
        while(q--){
            scanf("%d",&f);
            if(f==0){
                scanf("%lld%lld",&x,&v);
                Ln = x; Rn = n-1-x;
                if(ar[x]<v){
                    d = v-ar[x];
                    ans += (-1*Ln*d) + (Rn*d);
                }
                else{
                    d = ar[x]-v;
                    ans += (-1*Rn*d) + (Ln*d);
                }
                ar[x] = v;
            }
            else{
                printf("%lld\n",ans);
            }
        }
    }
    return 0;
}


