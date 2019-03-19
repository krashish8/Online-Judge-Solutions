/*
Problem Name: B - Fedor and New Game
Problem ID: 467B
Problem URL: https://codeforces.com/contest/467/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 51249650
Solution Time: 2019-03-13 10:50:14
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

    int n, m, k;
    cin >> n >> m >> k;
    int a[m+1];
    for (int i = 0; i < m+1; ++i)
    {
    	cin >> a[i];
    }
    int ans = 0;
    for (int i = 0; i < m; ++i)
    {
    	int x = a[i]^a[m];
    	int c = 0;
    	for (int j = 0; j < 20; j++) {
    		if(x & 1<<j)
    			c++;
    	}
    	if(c <= k) ans++;
    }
    cout << ans;
    return 0;
}