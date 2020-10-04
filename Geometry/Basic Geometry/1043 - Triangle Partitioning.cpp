#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mkp make_pair
#define pii pair<int,int>
using namespace std;

int main()
{
    int T;
    scanf("%d",&T);
    double ab,ac,bc,Aratio;
    double k,ad;
    for(int t=1;t<=T;t++){
        scanf("%lf%lf%lf%lf",&ab,&ac,&bc,&Aratio);
        k = sqrt(Aratio/(Aratio+1));
        ad = k*ab;
        printf("Case %d: %.10f\n",t,ad);
    }
    return 0;
}

