/*
Problem Name: B - Books
Problem ID: 279B
Problem URL: https://codeforces.com/contest/279/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 51432131
Solution Time: 2019-03-18 05:01:25
Language: GNU C++17
Time consumed: 92 ms
Memory consumed: 800 KB
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

    int n, t;
    cin >> n >> t;
    int a[n];
    rep(i,0,n) cin >> a[i];
    rep(i,1,n) {
    	a[i] += a[i-1];
    }
	int j = upper_bound(a,a+n,t) - a;
	int mx = j;
    rep(i,0,n) {
    	j = upper_bound(a+i,a+n,a[i]+t) - a;
    	mx = max(mx,j-i-1);
    }
    cout << mx;
    return 0;
}