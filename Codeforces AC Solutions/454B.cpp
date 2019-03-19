/*
Problem Name: B - Little Pony and Sort by Shift
Problem ID: 454B
Problem URL: https://codeforces.com/contest/454/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 51343045
Solution Time: 2019-03-15 20:05:28
Language: GNU C++17
Time consumed: 46 ms
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

    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
    	cin >> a[i];
    }
    for (int i = n-1; i>0; i--) {
    	if(a[i]<a[i-1]) {
    		for (int j = i-1; j>0; j--) {
    			if(a[j]<a[j-1]) return cout << -1, 0;
    		}
    		if(a[0]<a[n-1]) return cout << -1, 0;
    		return cout << (n-i), 0;
    	}
    }
    cout << 0;
    return 0;
}