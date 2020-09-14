#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mkp make_pair
#define pii pair<int,int>
#define pi acos(-1.0)
using namespace std;

int func(int n, int k)
{
    if(n==1){
        return 1;
    }
	return (func(n-1,k)+k-1)%n +1;
}
int main()
{
	int T;
	scanf("%d",&T);
	int n,k,ans;
    for(int t=1;t<=T;t++){
        scanf("%d%d",&n,&k);
        ans = func(n,k);
        printf("Case %d: %d\n",t,ans);
    }
    return 0;
}


