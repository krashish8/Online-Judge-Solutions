/*
Problem Name: A - DZY Loves Chessboard
Problem ID: 445A
Problem URL: https://codeforces.com/contest/445/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 50771198
Solution Time: 2019-03-04 07:58:06
Language: GNU C++17
Time consumed: 46 ms
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

char c[105][105];

signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int m, n;
    cin >> m >> n;
    rep(i,1,m+1) {
        rep(j,1,n+1) {
            cin >> c[i][j];
            if(c[i][j]==&#39;.&#39;) {
                if((i+j)%2) cout << &#39;B&#39;;
                else cout << &#39;W&#39;;
            }
            else cout << c[i][j];
        }
        cout << endl;
    }
    return 0;
}