#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mkp make_pair
#define pii pair<int,int>
#define pi acos(-1.0)
using namespace std;
vector<int>vec;
int main()
{
    int T;
    scanf("%d",&T);
    int ans,d,n;
    for(int t=1;t<=T;t++)
    {
        scanf("%d",&n);
        vec.clear();
        int x[n+2],y[n+2];
        for(int i=0;i<n;i++){
            scanf("%d%d",&x[i],&y[i]);
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                d = ((x[i]-x[j])*(x[i]-x[j])) + ((y[i]-y[j])*(y[i]-y[j]));
                vec.pb(d);
            }
        }
        sort(vec.begin(),vec.end());
        ans = 1 + distance(vec.begin(), unique(vec.begin(),vec.end()));

        printf("Case %d: %d\n",t,ans);
    }
    return 0;
}


