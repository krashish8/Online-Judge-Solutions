/*
Problem Name: B - Little Elephant and Magic Square
Problem ID: 259B
Problem URL: https://codeforces.com/contest/259/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 51420583
Solution Time: 2019-03-17 19:17:17
Language: GNU C++17
Time consumed: 62 ms
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

    int n[3][3];
    rep(i,0,3) rep(j,0,3) cin >> n[i][j];
    int a = n[0][1] + n[0][2];
    int b = n[1][0] + n[1][2];
    int c = n[2][0] + n[2][1];
    n[0][0] = (b+c-a)/2;
    n[1][1] = (c+a-b)/2;
    n[2][2] = (a+b-c)/2;
    rep(i,0,3) {
    	rep(j,0,3) cout << n[i][j] << " ";
    	cout << endl;
    }
    return 0;
}