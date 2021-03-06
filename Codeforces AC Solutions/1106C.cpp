/*
Problem Name: C - Lunar New Year and Number Division
Problem ID: 1106C
Problem URL: https://codeforces.com/contest/1106/problem/C
Author: Ashish Kumar (ashishkr23438)
Solution ID: 49249077
Solution Time: 2019-01-31 15:43:12
Language: GNU C++17
Time consumed: 108 ms
Memory consumed: 5900 KB
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
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		 cin >> a[i];
	}
	sort(a,a+n);
	int s = 0;
	for (int i = 0; i < n/2; ++i)
	{
		s+=(a[i]+a[n-i-1])*(a[i]+a[n-i-1]);
		//dbg(s);
	}
	cout << s;
    return 0;
}