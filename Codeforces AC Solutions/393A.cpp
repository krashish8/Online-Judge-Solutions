/*
Problem Name: A - Nineteen
Problem ID: 393A
Problem URL: https://codeforces.com/contest/393/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 51225448
Solution Time: 2019-03-12 16:56:40
Language: GNU C++17
Time consumed: 31 ms
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

int c[26];

signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    string s;
    cin >> s;
    for (int i = 0; i < s.length(); ++i)
    {
    	c[s[i]-&#39;a&#39;]++;
    }
    cout << min({(c[&#39;n&#39;-&#39;a&#39;]-1)/2, c[&#39;e&#39;-&#39;a&#39;]/3, c[&#39;t&#39;-&#39;a&#39;], c[&#39;i&#39;-&#39;a&#39;]});
    return 0;
}