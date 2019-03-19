/*
Problem Name: A - Lunar New Year and Cross Counting
Problem ID: 1106A
Problem URL: https://codeforces.com/contest/1106/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 49246403
Solution Time: 2019-01-31 15:38:55
Language: GNU C++17
Time consumed: 31 ms
Memory consumed: 3800 KB
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
#define dbg(x) { cout<<#x<<": "<<x<< endl; }
#define dbg2(x,y) { cout<<#x<<": "<<x<<" , "<<#y<<": "<<y<<endl; }
#define dbg3(x,y,z) { cout<<#x<<": "<<x<<" , "<<#y<<": "<<y<<" , "<<#z<<": "<<z<<endl; }
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#ifndef LOCAL
#define endl &#39;\n&#39;
#endif
const int inf = 2000000000;
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

	int n;
	cin >> n;
	char c[n][n];
	rep(i,0,n) {
		rep(j,0,n)
		cin >> c[i][j];
	}
	int cnt = 0;
	rep(i,1,n-1) {
		rep(j,1,n-1)
		if(c[i][j] == &#39;X&#39; && c[i-1][j-1]==&#39;X&#39; && c[i-1][j+1]==&#39;X&#39; && c[i+1][j+1]==&#39;X&#39; && c[i+1][j-1]==&#39;X&#39; && c[i+1][j+1]==&#39;X&#39;) cnt++;
	}
	cout << cnt;
    return 0;
}