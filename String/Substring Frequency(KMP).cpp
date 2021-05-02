#include<bits/stdc++.h>
#define mod 1000000009
#define ll long long
using namespace std;

int pi[2000008];

int main()
{
    int T;
    int LA, LB, ans, j;
    string A, B;
    scanf("%d",&T);
    for(int t=1; t<=T; t++){
        cin>>A;
        cin>>B;
        A = B + '#' + A;
        LA = A.size();
        LB = B.size();

        pi[0] = 0;
        for(int i=1; i<LA; i++){
            j = pi[i-1];
            while(j>0 && A[j]!=A[i])
                j = pi[j-1];
            if(A[j] == A[i])
                j++;
            pi[i] = j;
        }
        ans=0;
        for(int i=LB; i<LA; i++){
            if(pi[i] == LB)
                ans++;
        }
        printf("Case %d: %d\n", t, ans);
    }
    return 0;
}

