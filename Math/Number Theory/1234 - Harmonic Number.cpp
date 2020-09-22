/**
The method for calculating sum is, for a loop,
sum += 1/i;

But upper limit for given number 100000000,
So to ease it, we can set an array Hrr which size will be 1000000;
in one loop, we will calculate sum, and for every 100 , we will save it to Hrr[i/100],

Then, when we will scan a number, we just have to know how many 100s it have passed.
so get the sum for Hrr[n/100],
then just for remaining n - (100*(n/100)), calculate sum by sum += 1/i; and add it with previous sum;
**/
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mkp make_pair
#define pii pair<int,int>
#define N 100000005
using namespace std;

double Hrr[1000005];
void Hfunc()
{
    double sum=0;
    for(ll i=1; i<N; i++){
        sum += (1.0/i);
        if(i%100 == 0){
            Hrr[i/100] = sum;
        }
    }
}

int main()
{
    int T;
    Hfunc();
    /*for(ll i=0; i<=100; i++){
        cout<<Hrr[i]<<" ";
    }
    cout<<endl;*/
    ll n, si;
    double sum;
    scanf("%d",&T);
    for(int t=1;t<=T;t++){
        scanf("%lld",&n);
        si = n/100;
        sum = Hrr[si];
        //cout<<sum<<endl;
        for(ll i=(si*100 +1); i<=n; i++){
            sum += (1.0/i);
        }
        printf("Case %d: %.10lf\n",t,sum);
    }
    return 0;
}

