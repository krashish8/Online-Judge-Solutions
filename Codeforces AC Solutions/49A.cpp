/*
Problem Name: A - Sleuth
Problem ID: 49A
Problem URL: https://codeforces.com/contest/49/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 51069499
Solution Time: 2019-03-09 10:11:13
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
const int N  = 5e5+5;



signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    string s;
    getline(cin, s);
    for(int i = s.length()-1; i>=0; i--) {
        if(s[i]==&#39;?&#39; || s[i]==&#39; &#39;)continue;
        char c=tolower(s[i]);
        if(c==&#39;a&#39; || c==&#39;e&#39; || c==&#39;i&#39; || c==&#39;o&#39; || c==&#39;u&#39; || c==&#39;y&#39;) {cout << "YES"; break;}
        else  {cout << "NO"; break;}
    }
    return 0;
}