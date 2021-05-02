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
    string s;
    int len;
    for(int t=1; t<=T; t++){
        cin>>s;
        len = s.size();
        printf("Case %d: ",t);
        for(int i=0; i<len; i++){
            if(i==4 && s[i]==':'){
                printf("s");
            }
            printf("%c",s[i]);
        }
        printf("\n");
    }
    return 0;
}

