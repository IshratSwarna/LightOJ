#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mkp make_pair
#define pii pair<int,int>
#define pi acos(-1.0)
using namespace std;

ll binToDec(ll n){
    ll num = n;
    ll decvalue = 0;
    ll base = 1;
    ll digit;
    while(num>0){
        digit = num%10;
        num = num/10;
        decvalue = decvalue + (digit*base);
        base *= 2;
    }
    return decvalue;
}

int main()
{
    int T;
    scanf("%d",&T);
    ll p,q,r,s,a,b,c,d;
    char dot;
    for(int t=1;t<=T;t++)
    {
        cin>>a>>dot>>b>>dot>>c>>dot>>d;
        cin>>p>>dot>>q>>dot>>r>>dot>>s;
        if(binToDec(p)==a && binToDec(q)==b && binToDec(r)==c && binToDec(s)==d){
            printf("Case %d: Yes\n",t);
        }
        else{
            printf("Case %d: No\n",t);
        }
    }
    return 0;
}


