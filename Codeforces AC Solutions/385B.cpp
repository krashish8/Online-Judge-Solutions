/*
Problem Name: B - Bear and Strings
Problem ID: 385B
Problem URL: https://codeforces.com/contest/385/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 47377746
Solution Time: 2018-12-22 21:32:19
Language: GNU C++17
Time consumed: 15 ms
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
#define inf INT_MAX
#define rep(i,a,b) for (int i=a; i<b; ++i)
#define dbg(x) { cerr<<#x<<": "<<x<< endl; }
#define dbg2(x,y) { cerr<<#x<<": "<<x<<" , "<<#y<<": "<<y<<endl; }
#define dbg3(x,y,z) { cerr<<#x<<": "<<x<<" , "<<#y<<": "<<y<<" , "<<#z<<": "<<z<<endl; }
#define eps 0.0000001
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#ifndef LOCAL
#define endl &#39;\n&#39;
#endif


signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    string s;
    cin >> s;
    int l = s.length();
    int ans = 0, prev = -1;
    for (int i = 0; i < l; ++i)
    {
        if(s.substr(i,4)=="bear") {
            ans += (i-prev)*(l-i-3);
            prev=i;
        }
    }
    cout << ans;
    return 0;
}
