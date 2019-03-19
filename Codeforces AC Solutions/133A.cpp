/*
Problem Name: A - HQ9+
Problem ID: 133A
Problem URL: https://codeforces.com/contest/133/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 47553293
Solution Time: 2018-12-27 17:18:09
Language: GNU C++17
Time consumed: 62 ms
Memory consumed: 7800 KB
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
const int MOD = 1073741824;
const double eps = 0.0000001;
const double PI = acos(-1.0);
const int N  = 1e6+5;

int divs[N];

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
        if(s[i]==&#39;H&#39; || s[i]==&#39;Q&#39; || s[i]==&#39;9&#39;) return cout<<"YES",0;
    }
    cout<<"NO";
    
    return 0;
}