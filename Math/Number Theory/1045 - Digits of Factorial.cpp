#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mkp make_pair
#define pii pair<int,int>
using namespace std;

double logrr[1000005];
void cal_log()
{
    logrr[0] = 0;
    for(int i=1; i<=1000002; i++){
        logrr[i] = logrr[i-1] + log(i);
    }
}

int main()
{
    cal_log();
    int T;
    scanf("%d",&T);
    int n,b,ans;
    for(int t=1;t<=T;t++){
        scanf("%d%d",&n,&b);

        ans = logrr[n]/log(b) + 1;
        printf("Case %d: %d\n",t,ans);
    }
    return 0;
}

