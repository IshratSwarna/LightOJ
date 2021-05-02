#include<bits/stdc++.h>
using namespace std;

string get_string(string l, int len){
    string s = "";
    for(int i=0; i<len; i++){
        if(l[i]==' ')
            continue;
        if(l[i]>=65 && l[i]<=90){
            l[i] += 32; 
        }
        s = s + l[i];
    }
    return s;
}
int main()
{
    int T;
    string l1, l2;
    string s1, s2;
    int len1, len2;
    scanf("%d", &T);
    cin.ignore();
    for(int t=1; t<=T; t++){
        getline(cin, l1);
        getline(cin, l2);

        len1 = l1.size();
        len2 = l2.size();

        s1 = get_string(l1, len1);
        s2 = get_string(l2, len2);

        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());

        if(s1 == s2){
            printf("Case %d: Yes\n", t);
        }
        else{
            printf("Case %d: No\n", t);
        }
    }
    return 0;
}
