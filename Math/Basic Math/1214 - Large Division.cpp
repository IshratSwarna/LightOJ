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
    string a;
    ll i,b,re,p,la;
    for(int t=1;t<=T;t++)
    {
        cin>>a>>b;
        la = a.size();
        if(b<0){
            b *= -1;
        }
        i=0;
        if(a[0] == '-'){
            i = 1;
        }
        re=0;
        for( ;i<la;i++){
            p = a[i] - '0';
            re = p + (re*10);
            re = re%b;
        }
        if(re==0){
            printf("Case %d: divisible\n",t);
        }
        else{
            printf("Case %d: not divisible\n",t);
        }
    }
    return 0;
}


