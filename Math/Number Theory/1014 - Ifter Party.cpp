#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mkp make_pair
#define pii pair<int,int>
using namespace std;
vector<ll>vec;
int main()
{
    int T;
    scanf("%d",&T);
    ll n,p,l,sn,len,c;
    for(int t=1;t<=T;t++){
        scanf("%lld%lld",&p,&l);
        n = p-l;
        if(n<=l)
            printf("Case %d: impossible\n",t);
        else{
            sn = sqrt(n);
            vec.clear();
            for(ll i=1;i<=sn;i++){
                if(n%i == 0){
                    vec.pb(i);
                    vec.pb(n/i);
                }
            }
            len = vec.size();
            c=0;
            sort(vec.begin(),vec.end());
            printf("Case %d:",t);
            if(len>0 && vec[0]>l){
                c++;
                printf(" %lld",vec[0]);
            }
            if(len>1){
                for(ll i=1;i<len;i++){
                    if((vec[i]!=vec[i-1]) && (vec[i]>l)){
                        c++; printf(" %lld",vec[i]);
                    }
                }
            }
            if(c==0){
                printf(" impossible");
            }
            printf("\n");
        }
    }
    return 0;
}

