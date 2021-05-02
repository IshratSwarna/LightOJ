///Rabin Karp
#include<bits/stdc++.h>
#define mod 1000000009
#define ll long long
using namespace std;

ll dp[1000002];
ll pp[1000002];

void init_inputString(string A, int LA){
    ll prime=31;
    dp[0] = (A[0] - 'a' + 1);
    pp[0] = 1;
    for(int i=1; i<LA; i++){
        pp[i] = (pp[i-1]*prime)%mod;
        dp[i] = (dp[i-1] + (A[i] - 'a' + 1)*pp[i])%mod;
    }
}

ll get_substringHash(int L, int R){
    int res = dp[R];
    if(L>0){
        res = (res - dp[L-1] + mod)%mod;
    }
    return res;
}

ll getHash(string B){
    ll val=0, prime=31, pp=1;
    for(char ch : B){
        val = (val + (ch - 'a' + 1)*pp)%mod;
        pp = (pp*prime)%mod;
    }
    return val;
}

int main()
{
    int T, n;
    int LA, LB, Q, ans, L, R;
    string A, B;
    ll mv, mmv, cv;
    scanf("%d",&T);
    for(int t=1; t<=T; t++){
        cin>>A;
        cin>>B;
        LA = A.size();
        LB = B.size();

        init_inputString(A, LA);
        mv = getHash(B);

        ans=0;
        for(L=0, R=LB-1; R<LA; L++, R++){
            mmv = (mv*pp[L])%mod;
            cv = get_substringHash(L, R);
            if(cv==mmv){
                ans++;
            }
        }
        printf("Case %d: %d\n", t, ans);
    }
    return 0;
}

