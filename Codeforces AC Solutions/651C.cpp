/*
Problem Name: C - Watchmen
Problem ID: 651C
Problem URL: https://codeforces.com/contest/651/problem/C
Author: Ashish Kumar (ashishkr23438)
Solution ID: 51341322
Solution Time: 2019-03-15 19:20:10
Language: GNU C++17
Time consumed: 202 ms
Memory consumed: 3100 KB
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

bool comp(pii a, pii b) {
	return (a.se < b.se);
}

signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n;
    cin >> n;
    pii a[n];
    for (int i = 0; i < n; ++i)
    {
    	int c, d;
    	cin >> c >> d;
    	a[i].fi = c;
    	a[i].se = d;
    }
    sort(a,a+n);
    int c = 1, d = 1, e = 1, ans = 0;
    for (int i = 1; i < n; ++i)
    {
    	if(a[i].fi==a[i-1].fi) c++;
    	else {ans += c*(c-1)/2; c = 1;}
    	if(a[i].fi==a[i-1].fi && a[i].se==a[i-1].se) e++;
    	else {ans -= e*(e-1)/2; e = 1;}
    }
    sort(a,a+n,comp);
    for (int i = 1; i < n; ++i)
    {
    	if(a[i].se==a[i-1].se) d++;
    	else {ans += d*(d-1)/2; d = 1;}
    }
    ans += c*(c-1)/2 + d*(d-1)/2 - e*(e-1)/2;
    cout << ans;
    return 0;
}