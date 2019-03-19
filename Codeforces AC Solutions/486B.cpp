/*
Problem Name: B - OR in Matrix
Problem ID: 486B
Problem URL: https://codeforces.com/contest/486/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 48528600
Solution Time: 2019-01-18 13:24:55
Language: GNU C++17
Time consumed: 30 ms
Memory consumed: 500 KB
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

    int n, m;
    cin >> n >> m;
    int a[n][m], b[n][m], c[n][m];
    rep(i,0,n) {
        rep(j,0,m) {
            cin >> a[i][j];
            b[i][j] = 1;
            c[i][j] = 0;
        }
    }
    for (int i = 0; i < n; ++i)
    {
        for(int j = 0; j < m; j++) {
            if(a[i][j]==0) {
                rep(k,0,n)
                    b[k][j] = 0;
                rep(k,0,m)
                    b[i][k] = 0;
            }
        }
    }
    rep(i,0,n) {
        rep(j,0,m) {
            if(b[i][j] == 1) {
                rep(k,0,n)
                    c[k][j] = 1;
                rep(k,0,m) 
                    c[i][k] = 1;
            }
        }
    }

    rep(i,0,n) {
        rep(j,0,m)
            if(a[i][j]!=c[i][j]) return cout << "NO",0;
    }
    cout << "YES\n";
    rep(i,0,n) {
        rep(j,0,m) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}