/*
Problem Name: A - Table
Problem ID: 359A
Problem URL: https://codeforces.com/contest/359/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 50772876
Solution Time: 2019-03-04 09:18:44
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
    int a[n][m];
    int f = 0;
    rep(i,0,n) {
    	rep(j,0,m) {
    		cin >> a[i][j];
    		if((i==0 || j==0 || i==n-1 || j==m-1) && (a[i][j]==1)) f=1;
    	}
    }
    if(f) cout << 2;
    else cout << 4;
    return 0;
}