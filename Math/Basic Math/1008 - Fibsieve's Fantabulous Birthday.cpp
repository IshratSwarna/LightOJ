/**

Think about time = 12, 13, 14;
One common row or col value here is -> 4. and sqrt(12) , sqrt(13) , sqrt(14) is by ceiling ->4.
So, for 12 -> row=4 ; 13 -> col=4 ; 14 -> col=4.
here we can see 4 is row for 12 and col for 13, 14. So we have to fix them. we can do this by checking value of p (=sqrt*sqrt - n).
here p<ceil(sqrt) for 13 and 14. So we can easily set this, if p<ceil(sqrt) then col = ceil(sqrt(n)) , otherwise row = ceil(sqrt(n)).
Now,
for 12-> col=3 ; 13-> row=4 ; 14-> row=3;
this also can be set by value of p.
if p<ceil(sqrt), ie. for 13 and 14.
row  will be p+1.
otherwise, for 12.
col will be n - (ceil(sqrt)-1)*(ceil(sqrt)-1);
Thus, we get,
12-> row=4, col=3;
13-> row=4, col=4;
14-> row=3, col=4;

Now Think about time = 8, 7, 6;
In the same way, we get,
8-> row=2, col=3;
7-> row=3, col=3;
6-> row=3, col=2;
But, here the problem occurs. row and col value are just opposite to the actual values.
To fix this, use ceil(sqrt) . cause, for previous example, ceil(sqrt) was even. and for this example, ceil(sqrt) is odd.
so if we find ceil(sqrt) odd, then we will swap row,col values.

Now look at the code below !! :D

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
    ll sqrtn,n,p,col,row;
    for(int t=1;t<=T;t++)
    {
        scanf("%lld",&n);
        sqrtn = ceil(sqrt(n));
        p = (sqrtn*sqrtn) - n;
        if(p<sqrtn){
            col = sqrtn;
            row = p+1;
        }
        else{
            row = sqrtn;
            col = n - ((sqrtn-1)*(sqrtn-1));
        }
        if(sqrtn%2 != 0)
            swap(row,col);
        printf("Case %d: %lld %lld\n",t,col,row);
    }
    return 0;
}

/** Input/output
3
8
Case 1: 2 3
20
Case 2: 5 4
25
Case 3: 1 5 **/
