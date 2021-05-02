///Rolling Hash
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mkp make_pair
#define pii pair<int,int>
#define mod 1000000009
using namespace std;
ll dp[1000002];
ll inv[1000002];
ll Bigmod_Pow(ll a, ll b)
{
    ll result = 1;

	while(b)
	{
		if(b & 1) result = (result * a) % mod;

		b >>= 1;
		a = (a * a) % mod;
	}

	return result;
}

void init_inputString(string A, int LA)
{
    ll prime = 31;
    ll pp = 1;
    dp[0] = (A[0] - 'a' + 1);
    inv[0] = 1;
    for(int i=1; i<LA; i++){
        pp = (pp*prime)%mod;
        inv[i] = Bigmod_Pow(pp, mod-2);
        dp[i] = (dp[i-1] + (A[i] - 'a' + 1)*pp)%mod;
    }
}

ll get_substringHash(int L, int R)
{
    int ans = dp[R];
    if(L>0){
        ans = (ans - dp[L-1] + mod)% mod;
    }
    ans = (ans * inv[L])%mod;
    return ans;
}

ll getHash(string B)
{
    ll val=0, prime=31, pp=1;
    for(char ch : B){
        val = (val + (ch -'a'+1)*pp)%mod;
        pp = (pp*prime)%mod;
    }
    return val;
}
int main()
{
    int T;
    string A, B;
    ll mv, cv;
    int L,R, LA, LB;
    int ans;
    scanf("%d",&T);

    for(int t=1; t<=T; t++){
        cin>>A;
        cin>>B;

        LA = A.size();
        LB = B.size();

        init_inputString(A, LA);
        mv = getHash(B);
        //cout<<mv<<endl;

        ans=0;
        for(L=0, R=LB-1; R<LA; L++, R++){
            cv = get_substringHash(L, R);
            //cout<<cv<<endl;
            if(mv==cv){
                ans++;
            }
        }
        printf("Case %d: %d\n",t, ans);
    }
    return 0;
}

