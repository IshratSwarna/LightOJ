#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mkp make_pair
#define pii pair<int,int>
#define NMOD 1000000007
using namespace std;

vector<ll>PrimeVec;

ll ar[65542];
void PrimeSieve()
{
    for(int i=2;i*i<=65540;i++){
        if(ar[i] == 0){
            for(int p=i*i; p<=65540; p+=i)
                ar[p] =1;
        }
    }
    for(int i=2;i<=65540;i++){
        if(ar[i]==0)
            PrimeVec.pb(i);
    }
}

ll Bigmod_Pow(ll a, ll b)
{
    ll z;
    if(b==0) return 1%NMOD;
    z = Bigmod_Pow(a,b/2);
    z = (z*z)%NMOD;
    if(b%2 != 0)
        z = (z*(a%NMOD))%NMOD;
    return z%NMOD;
}

ll gcd(ll a,ll b)
{
    ll re;
    while(b>0){
        re = a%b;
        a = b;
        b = re;
    }
    return a;
}
ll Mod_multiplicative_inverse_func(ll n)
{
    if(gcd(n,NMOD)==1){
        return Bigmod_Pow(n,NMOD-2)%NMOD;
    }
    else
        return 0;
}
int main()
{
    PrimeSieve();
    int T;
    scanf("%d",&T);
    ll n,m;
    ll mi,x,ans,c,Prime,PrimePower,lob,tm;
    ll len = PrimeVec.size();

    for(int t=1;t<=T;t++){
        scanf("%lld%lld",&n,&m);
        ans = 1%NMOD;
        for(ll i=0;i<len && n>1;i++){
            Prime = PrimeVec[i];
            c=0;
            while(n%Prime == 0){
                c++; n /= Prime;
            }
            if(c>0){
                PrimePower = c*m +1;
                x = Bigmod_Pow(Prime,PrimePower);
                lob = (x-1)%NMOD;
                mi = Mod_multiplicative_inverse_func(Prime-1);
                tm = ((lob%NMOD)*(mi%NMOD))%NMOD;
                tm = (tm+NMOD)%NMOD;
                ans = ((ans%NMOD)*(tm%NMOD))%NMOD;
            }
        }
        if(n>1){///if given n is a prime number
            x = Bigmod_Pow(n,m+1);
            lob = (x-1)%NMOD;
            mi = Mod_multiplicative_inverse_func(n-1);
            tm = ((lob%NMOD)*(mi%NMOD))%NMOD;
            tm = (tm+NMOD)%NMOD;
            ans = ((ans%NMOD)*(tm%NMOD))%NMOD;
        }
        printf("Case %d: %lld\n",t,ans);
    }
    return 0;
}

