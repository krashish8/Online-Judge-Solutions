/*
Problem Name: A - Card Game
Problem ID: 106A
Problem URL: https://codeforces.com/contest/106/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 51005417
Solution Time: 2019-03-08 12:00:46
Language: GNU C++17
Time consumed: 62 ms
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
    cin >> s;
    string t, u;
    cin >> t >> u;
    if(t[1]==s[0] && u[1]!=s[0]) return cout << "YES",0;
    if(t[1]==u[1]) {
        string arr={&#39;6&#39;,&#39;7&#39;,&#39;8&#39;,&#39;9&#39;,&#39;T&#39;,&#39;J&#39;,&#39;Q&#39;,&#39;K&#39;,&#39;A&#39;};
        for (int i = 0; i < 9; ++i)
        {
            if(arr[i]==u[0]) {
                for (int j = i+1; j < 9; j++) {
                    if(arr[j]==t[0]) return cout << "YES",0;
                }
            }
        }
    }
    cout << "NO";
    return 0;
}