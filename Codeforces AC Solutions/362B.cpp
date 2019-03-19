/*
Problem Name: B - Petya and Staircases
Problem ID: 362B
Problem URL: https://codeforces.com/contest/362/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 51420786
Solution Time: 2019-03-17 19:23:38
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



signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n, m;
    cin >> n >> m;
    int a[m];
    rep(i,0,m) cin >> a[i];
    sort(a,a+m);
    rep(i,0,m-2) {
    	if(a[i]-a[i+1]==-1 and a[i+1]-a[i+2]==-1)
    		return cout << "NO",0;
    }
    if(a[0]==1 || a[m-1]==n) cout << "NO";
    else cout << "YES";
    return 0;
}