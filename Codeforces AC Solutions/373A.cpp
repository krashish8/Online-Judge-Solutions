/*
Problem Name: A - Collecting Beats is Fun
Problem ID: 373A
Problem URL: https://codeforces.com/contest/373/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 50771665
Solution Time: 2019-03-04 08:20:46
Language: GNU C++17
Time consumed: 30 ms
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

int cc[10];

signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int k;
    cin >> k;
    rep(i,0,4) {
    	rep(j,0,4) {
    		char c;
    		cin >> c;
    		cc[c-&#39;0&#39;]++;
    	}
    }
    for (int i = 0; i < 10; ++i)
    {
    	if(cc[i]>2*k) return cout << "NO",0;
    }
    cout << "YES";
    return 0;
}