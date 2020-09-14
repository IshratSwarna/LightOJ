#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mkp make_pair
#define pii pair<int,int>
#define pi acos(-1.0)
using namespace std;

int main()
{
    int T;
    scanf("%d",&T);
    int m,n,mx,mn,ans;
    for(int t=1;t<=T;t++)
    {
        scanf("%d%d",&m,&n);
        if(m==1) ans=n;
        else if(n==1) ans=m;
        else if(m==2 || n==2){
            mx = max(m,n);
            if(mx%4 == 0)
                ans = mx;
            else if(mx%4 == 2)
                ans = mx+2;
            else if((mx%4 == 1) || (mx%4 == 3))
                ans = mx+1;
        }
        else{
            mn = m*n;
            if(mn%2 == 0) ans = mn/2;
            else ans = (mn/2)+1;
        }
        printf("Case %d: %d\n",t,ans);
    }
    return 0;
}


