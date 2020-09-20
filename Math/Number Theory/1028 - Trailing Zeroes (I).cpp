#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mkp make_pair
#define pii pair<int,int>
#define N 1000005
using namespace std;
vector<ll>Prime;
vector<ll>ar;
void Seive()
{
    for(ll i=0;i<=N;i++){
        ar.pb(0);
    }
    ll sN = sqrt(N);
    for(ll i=2;i<=sN; i++){
        if(ar[i] == 0){
            for(ll p=i*i; p<=N; p+= i){
                ar[p] = 1;
            }
        }
    }
    for(ll i=2; i<=N;i++){
        if(ar[i]==0)
            Prime.pb(i);
    }
}
ll divisor(ll n)
{
    ll ans=1;
    ll c,d;
    ll p = Prime.size();
    for(ll i=0;i<p and i*i<=n;i++){
        d = Prime[i];
        c=0;
        if(n%d == 0){
            while(n%d == 0){
                c++;
                n= n/d;
                if(n==0 or n==1) break;
            }
            ans *= (c+1);
        }
    }
    if(n!=1)
        ans *= 2;
    return ans-1;
}
int main()
{
    Seive();
    int T;
    scanf("%d",&T);
    ll n,ans;
    for(int t=1;t<=T;t++){
        scanf("%lld",&n);
        ans = divisor(n);
        printf("Case %d: %lld\n",t,ans);
    }
    return 0;
}
