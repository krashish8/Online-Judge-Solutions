/*
Problem Name: B - Mashmokh and Tokens
Problem ID: 415B
Problem URL: https://codeforces.com/contest/415/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 48425906
Solution Time: 2019-01-15 17:54:15
Language: GNU C++17
Time consumed: 62 ms
Memory consumed: 200 KB
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
const double pi = acos(-1.0);
const int MOD = 998244353;
const int N  = 1e5+5;


signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n, a, b;
    cin >> n >> a >> b;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        int k = x*a/b;
        int xx = (b*k+a-1)/a;
        cout << x-xx << " ";
    }
    return 0;
}