#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define mkp make_pair
#define pii pair<int,int>
using namespace std;

int zero_in_fact(int a, int b)
{
    int x=0, y=b;
    while(y<=a){
        x += a/y;
        y *= b;
    }
    return x;
}

int zero_in_p(int a, int b)
{
    int x=0;
    while(a%b == 0){
        x++;
        a = a/b;
    }
    return x;
}
int main()
{
    int T;
    scanf("%d",&T);
    int n,r,p,q,nr,zero ;
    int n_N2, n_N5, r_N2, r_N5, nr_N2, nr_N5, p_N2, p_N5, N2, N5;
    for(int t=1;t<=T;t++){
        scanf("%d%d%d%d",&n,&r,&p,&q);
        nr = n-r;

        n_N2 = zero_in_fact(n,2);
        n_N5 = zero_in_fact(n,5);
        r_N2 = zero_in_fact(r,2);
        r_N5 = zero_in_fact(r,5);
        nr_N2 = zero_in_fact(nr,2);
        nr_N5 = zero_in_fact(nr,5);

        p_N2 = q * zero_in_p(p,2);
        p_N5 = q * zero_in_p(p,5);

        N2 = n_N2 - r_N2 - nr_N2 + p_N2;
        N5 = n_N5 - r_N5 - nr_N5 + p_N5;

        zero = min(N2,N5);
        printf("Case %d: %d\n",t,zero);
    }
    return 0;
}


