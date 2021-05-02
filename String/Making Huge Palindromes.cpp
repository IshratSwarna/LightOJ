#include<bits/stdc++.h>
#define mod 1000000009
#define ll long long
using namespace std;

ll dpA[1000002];
ll dpB[1000002];
ll pp[1000002];

void init_inputString(string A, string B, int LA){
    ll prime=31;
    pp[0] = 1;
    dpA[0] = (A[0] - 'a' + 1);
    dpB[0] = (B[0] - 'a' + 1);
    for(int i=1; i<LA; i++){
        pp[i] = (pp[i-1] * prime)%mod;
        dpA[i] = (dpA[i-1] + (A[i] - 'a' + 1)*pp[i])%mod;
        dpB[i] = (dpB[i-1] + (B[i] - 'a' + 1)*pp[i])%mod;
    }
}

ll get_substringHashA(int L, int R){
    ll res = dpA[R];
    if(L>0){
        res = (res - dpA[L-1] + mod)%mod;
    }
    return res;
}
ll get_substringHashB(int L, int R){
    ll res = dpB[R];
    return res;
}

int main(){
    int T;
    string A, B;
    int LA, la, ra, lb, rb, n, pos, ans;
    ll vA, vB;
    scanf("%d", &T);
    for(int t=1; t<=T; t++){
        cin>>A;
        B = A;
        reverse(B.begin(), B.end());
        LA = A.size();

        //cout<<B<<endl;
        init_inputString(A, B, LA);

        ra=LA-1;
        lb=0;
        pos=0;
        for(int i=0; i<LA; i++){
            la = i;
            vA = get_substringHashA(la, ra);

            n = ra - la + 1;
            rb = lb + n- 1;
            vB = get_substringHashB(lb, rb);
            vB = (vB * pp[la])%mod;

            //cout<<vA<<endl;
            //cout<<vB<<endl;

            if(vA == vB){
                pos = i; break;
            }
        }

        ans = pos + LA;
        printf("Case %d: %d\n", t, ans);
    }
    return 0;
}
