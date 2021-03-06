/*
Problem Name: B - Preparing Olympiad
Problem ID: 550B
Problem URL: https://codeforces.com/contest/550/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 47724423
Solution Time: 2018-12-30 16:25:22
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


signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n, l, r, x;
    cin >> n >> l >> r >> x;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    int c=0;
    for (int i = 0; i < (1<<n); ++i)
    {
        int s = 0;
        int mn = inf;
        int mx = -inf;
        for (int j = 0; j < n; j++) {
            if(i & 1<<j) {
                s+=a[j];
                mx = max (mx, a[j]);
                mn = min (mn, a[j]);
            }
        }
        if(s>=l && s<=r && mx-mn>=x) c++;
    }
    cout << c;
    return 0;
}