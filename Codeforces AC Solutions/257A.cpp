/*
Problem Name: A - Sockets
Problem ID: 257A
Problem URL: https://codeforces.com/contest/257/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 51050544
Solution Time: 2019-03-08 23:48:18
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

    int n, m, k;
    cin >> n >> m >> k;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    sort(a,a+n,greater<int>());
    int c = 0, ans = k;
    while (ans<m) {
        if(c==n) break;
        ans+=a[c]-1;
        k--;
        c++;
    }
    if(ans<m) cout << -1;
    else cout << c;
    return 0;
}