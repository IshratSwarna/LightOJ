/**
Remember first time when we learned to divide .. Applying that process here,only  the remainder should be in mind .
every time we will add one digit from dividend to remainder*10 and again divide by n. when remainder is zero, we get the required dividend. That's it !
**/
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
    int n,nc,ans,c,d,re;
    for(int t=1;t<=T;t++)
    {
        scanf("%d%d",&n,&d);
        c=1; nc = n/10; ans = d;
        while(nc!=0){
            nc/=10;
            ans = (ans*10)+d;
            c++;
        }
        while(1){
            //cout<<ans<<endl;
            re = ans%n;
            if(re == 0){
                break;
            }
            ans = (re*10)+d;
            c++;
        }
        printf("Case %d: %d\n",t,c);
    }
    return 0;
}

