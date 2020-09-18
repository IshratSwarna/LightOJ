/**
Euler's Totient Function problem.
We have to save phi(n) using sievePhi();
then just like cumulative way, we can answer for range in linear time. **/
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mkp make_pair
#define pii pair<int,int>
using namespace std;
unsigned long long int phi[5000005];
int mark[5000005];
void seivePhi()
{
    for(int i=2; i<=5000002; i++) phi[i] = i;

    for(int i=2; i<=5000002; i++){
        if(!mark[i]){
            for(int j=i; j<=5000002; j+=i)
            {
                mark[j] = 1;
                phi[j] = phi[j]/i * (i-1);
            }
        }
    }
    ///cumulative sum type...for this problem, first square ,then sum with previous.
    for(long long int i=3; i<5000002; i++)
    {
        phi[i] *= phi[i];
        phi[i] += phi[i-1];
    }

}
int main()
{
    seivePhi();
    int T;
    scanf("%d",&T);
    unsigned long long int ans, a, b;
    for(int t=1;t<=T;t++){
        scanf("%llu%llu", &a, &b);
        ans = phi[b] - phi[a-1];
        printf("Case %d: %llu\n", t, ans);
    }
    return 0;
}
