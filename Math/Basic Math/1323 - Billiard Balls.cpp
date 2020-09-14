/**
1,4 NW-> 0,5 -> 1,4 -> 2,3 -> 3,2
1,1 SW-> 0,0 -> 1,1 -> 2,2 -> 3,3
9,1 SE-> 10,0 -> 9,1 -> 8,2 -> 7,3
8,3 NE-> 9,4 -> 10,5 -> 9,4 -> 8,3
9,4 NE-> 10,5 -> 9,4 -> 8,3 -> 7,2
7,4 NE-> 8,5 -> 9,4 -> 10,3 -> 9,2

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
    int l,w,n,k,x,y,d,N;
    char X,Y;
    for(int t=1;t<=T;t++)
    {
        scanf("%d%d%d%d",&l,&w,&n,&k);
        N=n;
        vector<pii>posVec;
        while(N--){
            cin>>x>>y>>Y>>X;
            if(Y=='N'){
                y += k;
            }
            else{
                y = fabs(y-k);
            }
            if(X=='W'){
                x = fabs(x-k);
            }
            else{
                x += k;
            }
            //cout<<x<<y<<endl;
            d = x/l;
            if(d%2 == 0){
                x = x%l;
            }
            else{
                x = l - (x%l);
            }
            d = y/w;
            if(d%2 == 0){
                y = y%w;
            }
            else{
                y = w - (y%w);
            }
            //cout<<x<<y<<endl;
            posVec.pb(mkp(x,y));
        }
        sort(posVec.begin(),posVec.end());
        printf("Case %d:\n",t);
        for(int i=0; i<n;i++){
            cout<<posVec[i].first<<" "<<posVec[i].second<<"\n";
        }
    }
    return 0;
}

