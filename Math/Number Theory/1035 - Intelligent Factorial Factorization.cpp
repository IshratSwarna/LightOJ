#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mkp make_pair
#define pii pair<int,int>
using namespace std;

int ar[105];
vector<int>PrimeVec;
void Primesieve()
{
    for(int i=2;i*i<=100;i++){
        if(ar[i] == 0){
            for(int p=i*i; p<=100; p+=i)
                ar[p] =1;
        }
    }
    for(int i=2;i<=100;i++){
        if(ar[i]==0)
            PrimeVec.pb(i);
    }
}
int func(int N, int b)
{
    int y = b, c=0;
    while(y <= N){
        c += N/y;
        y *= b;
    }
    return c;
}


int main()
{
    Primesieve();
    int len = PrimeVec.size();
    int T;
    scanf("%d",&T);
    int N,b,c;
    for(int t=1;t<=T;t++){
        scanf("%d",&N);
        printf("Case %d: %d = 2 (%d)",t,N,func(N,2));
        for(int i=1;i<len;i++){
            b = PrimeVec[i];
            c = func(N,b);
            if(c>0){
                printf(" * %d (%d)",b,c);
            }
        }
        printf("\n");
    }
    return 0;
}

