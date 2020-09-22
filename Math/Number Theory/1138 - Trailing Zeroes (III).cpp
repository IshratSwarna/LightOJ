#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mkp make_pair
#define pii pair<int,int>
using namespace std;

ll cal_zero(ll N)
{
    ll y=5, c=0;
    while(y <= N){
        c += (N/y);
        y *= 5;
    }
    return c;
}

int main()
{
    int T;
    scanf("%d",&T);
    ll q;
    ll mid, c, low, high, ans;
    for(int t=1;t<=T;t++){
        scanf("%lld",&q);
        ans = 0;
        low = 1; high = 400000015;
        while(low<=high){
            mid = (low+high)/2;
            c = cal_zero(mid);
            if(c == q){
                ans = mid;
                high = mid-1;
            }
            else if(c > q){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        if(ans == 0){
            printf("Case %d: impossible\n",t);
        }
        else{
            printf("Case %d: %lld\n",t,ans);
        }
    }
    return 0;
}
