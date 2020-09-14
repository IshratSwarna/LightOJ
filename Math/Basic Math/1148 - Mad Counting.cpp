#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mkp make_pair
#define pii pair<int,int>
#define pi acos(-1.0)
using namespace std;
int ar[1000004];
int main()
{
    int T;
    scanf("%d",&T);
    int n,a,ans;
    for(int t=1;t<=T;t++)
    {
        scanf("%d",&n);
        ans=0;
        memset(ar,0,sizeof(ar));
        while(n--){
            scanf("%d",&a);
            if(ar[a]==0){
                ans += a+1;
                ar[a]++;
            }
            else{
                if((ar[a]+1)<=(a+1)){
                    ar[a]++;
                }
                else{
                    ar[a] = 1;
                    ans += a+1;
                }
            }
        }
        printf("Case %d: %d\n",t,ans);
    }
    return 0;
}

