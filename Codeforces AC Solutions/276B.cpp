/*
Problem Name: B - Little Girl and Game
Problem ID: 276B
Problem URL: https://codeforces.com/contest/276/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 50695390
Solution Time: 2019-03-02 20:52:07
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
    int cc = 0;
    rep(i,0,26) {
        if(c[i]%2==1) cc++;
    }
    if(cc==0 || cc==1 || cc%2==1)
        cout << "First";
    else cout << "Second";
    return 0;
}