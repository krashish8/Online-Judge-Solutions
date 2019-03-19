/*
Problem Name: B - Jzzhu and Sequences
Problem ID: 450B
Problem URL: https://codeforces.com/contest/450/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 51402741
Solution Time: 2019-03-17 11:16:25
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

    int x, y, n;
    cin >> x >> y >> n;
    n = (n-1)%6 + 1;
    switch(n) {
    	case 1: cout << (x+2*MOD)%MOD; break;
    	case 2: cout << (y+2*MOD)%MOD; break;
    	case 3: cout << (y-x+2*MOD)%MOD; break;
    	case 4: cout << (-x+2*MOD)%MOD; break;
    	case 5: cout << (-y+2*MOD)%MOD; break;
    	case 6: cout << (x-y+2*MOD)%MOD; break;
    }
    return 0;
}