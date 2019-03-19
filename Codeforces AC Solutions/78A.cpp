/*
Problem Name: A - Haiku
Problem ID: 78A
Problem URL: https://codeforces.com/contest/78/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 47804254
Solution Time: 2019-01-01 08:20:25
Language: GNU C++17
Time consumed: 60 ms
Memory consumed: 0 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double
#define pb push_back
#define pii pair<int,int>
#define fi first
#define se second
#define rep(i,a,b) for (int i=a; i<b; ++i)
#define dbg(x) { cerr<<#x<<": "<<x<< endl; }
#define dbg2(x,y) { cerr<<#x<<": "<<x<<" , "<<#y<<": "<<y<<endl; }
#define dbg3(x,y,z) { cerr<<#x<<": "<<x<<" , "<<#y<<": "<<y<<" , "<<#z<<": "<<z<<endl; }
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#ifndef LOCAL
#define endl &#39;\n&#39;
#endif
const int inf = INT_MAX;
const double eps = 0.0000001;
const double PI = acos(-1.0);
const int MOD = 1e9+7;
const int N  = 150005;

 int cnt[905];

signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int t = 3;
    int ans=0;
    string s;
    while(t--) {
        getline(cin, s);
        int c = 0;
        for (int i = 0; i < s.length(); ++i)
        {
            if(s[i]==&#39;a&#39; || s[i]==&#39;e&#39; || s[i]==&#39;i&#39; || s[i]==&#39;o&#39; || s[i]==&#39;u&#39;)
                c++;
        }
        if(t==2 && c==5) ans++;
        if(t==1 && c==7) ans++;
        if(t==0 && c==5) ans++;
        dbg2(t,c);
        dbg(ans);
    }
    if(ans==3) cout << "YES";
    else cout << "NO";
    return 0;
}