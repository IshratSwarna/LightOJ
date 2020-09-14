#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mkp make_pair
#define pii pair<int,int>
#define pi acos(-1.0)
using namespace std;

ll func(ll ans, ll C, ll N)
{
    return ((ans*C)-(ans*ans*N));
}

int main()
{
    int T;
    scanf("%d",&T);
    ll n,c,ans,ans1,ans2;
    for(int t=1;t<=T;t++)
    {
        scanf("%lld%lld",&n,&c);
        if(n==0 || c==0){
            ans = 0;
        }
        else{
            ans1 = c/(2*n);
            ans2 = (c/(2*n)) + 1;
            if(func(ans1,c,n) >= func(ans2,c,n)){
                ans = ans1;
            }
            else{
                ans = ans2;
            }
        }
        printf("Case %d: %lld\n",t,ans);
    }
    return 0;
}


