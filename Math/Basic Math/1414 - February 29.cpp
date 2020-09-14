#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mkp make_pair
#define pii pair<int,int>
#define pi acos(-1.0)
using namespace std;

int LeapY(ll y)
{
    if(y%400 == 0 || (y%100 != 0 && y%4 == 0))
        return 1;
    else
        return 0;
}

int main()
{
    int T,t;
    scanf("%d",&T);
    ll year,date,mN,year2,date2,mN2,sy,n,temp;
    string month,com,month2;
    for(int t=1;t<=T;t++)
    {
        cin>>month>>date>>com>>year;
        cin>>month2>>date2>>com>>year2;
        sy=0;
        for(ll i=year;i<=year2;i++){
            if(LeapY(i)){
                sy=i; break;
            }
        }
        n=0;
        if(sy==year){
            if(month=="January" || month=="February")
                n++;
            else
                n=0;
        }
        else
            n=1;
        temp = (year2/4 - year2/100 + year2/400) - (sy/4 - sy/100 + sy/400);
        n += temp;
        if(LeapY(year2)==1){
            if( ((date2<29) && (month2=="February")) || (month2=="January"))
            n--;
        }
        if(sy==0){
            n=0;
        }
        printf("Case %d: %lld\n",t,n);
    }
    return 0;
}


