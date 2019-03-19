/*
Problem Name: B - Mike and Children
Problem ID: 1121B
Problem URL: https://codeforces.com/contest/1121/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 50748890
Solution Time: 2019-03-03 19:15:44
Language: GNU C++17
Time consumed: 46 ms
Memory consumed: 1600 KB
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

int c[200005];

signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n, mx = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    rep(i,0,n) {
        rep(j,i+1,n) {
            c[a[i]+a[j]]++;
        }
    }
    int ans = 0;
    for (int i = 0; i < 200005; ++i)
    {
        ans=max(ans,c[i]);
    }
    cout << ans;
    return 0;
}