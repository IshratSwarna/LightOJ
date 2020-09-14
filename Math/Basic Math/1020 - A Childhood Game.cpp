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
    ll n, res;
    string s,x;
    for(int t=1;t<=T;t++)
    {
        scanf("%lld",&n);
        cin>>s;
        n = n%3;
        if(s=="Alice"){
            if(n==2 || n==0)
                x = "Alice";
            else
                x = "Bob";
        }
        else{
            if(n==1 || n==2)
                x = "Bob";
            else
                x = "Alice";
        }
        printf("Case %d: ",t);
        cout<<x<<"\n";
    }
    return 0;
}


