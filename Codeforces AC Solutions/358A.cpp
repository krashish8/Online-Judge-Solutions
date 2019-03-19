/*
Problem Name: A - Dima and Continuous Line
Problem ID: 358A
Problem URL: https://codeforces.com/contest/358/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 50921662
Solution Time: 2019-03-07 12:34:34
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
#define dbg2(x,y) { cout<<#x<<": "<<x<<" , "<<#y<<": "<<y<<endl; }
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

    int n;
    cin >> n;
    int a[n];
    rep(i,0,n) cin >> a[i];
    rep(i,0,n-1) {
    	rep(j,0,n-1) {
    		int b=min(a[i],a[i+1]);
    		int c = max(a[i],a[i+1]);
    		int d = min (a[j], a[j+1]);
    		int e = max(a[j],a[j+1]);
			if(b<d && d < c && c<e) return cout << "yes",0;
			if(d < b && b<e && e<c) return cout << "yes",0;  
    	}
    }
    cout << "no";
    return 0;
}