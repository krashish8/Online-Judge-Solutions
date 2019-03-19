/*
Problem Name: C - Connect
Problem ID: 1130C
Problem URL: https://codeforces.com/contest/1130/problem/C
Author: Ashish Kumar (ashishkr23438)
Solution ID: 50448464
Solution Time: 2019-02-24 19:24:51
Language: GNU C++17
Time consumed: 31 ms
Memory consumed: 100 KB
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

int a[55][55];
int m[55][55];

signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n;
    cin >> n;
    int r1,c1,r2,c2;
    cin >> r1 >> c1 >> r2 >> c2;
    int c = 1;
    rep(i,1,n+1) {
        rep(j,1,n+1) {
            char tt;
            cin >> tt;
            if(tt==&#39;0&#39;) a[i][j]=1;
            else a[i][j] = 0;
            if(!a[i][j]) continue;
            if(a[i-1][j] && a[i][j-1]) {
                int s = m[i-1][j],t=m[i][j-1];
                m[i][j] = s;
                rep(k,1,n+1) {
                    rep(l,1,n+1) {
                        if(m[k][l]==t)
                            m[k][l] = s;
                    }
                }
            }
            else if(a[i-1][j]) m[i][j]=m[i-1][j];
            else if(a[i][j-1]) m[i][j]=m[i][j-1];
            else {m[i][j] = c; c++;}
        }
    }
    if(m[r1][c1]==m[r2][c2]) return cout << 0,0;
    int a1=m[r1][c1];
    int a2=m[r2][c2];
    int ans = inf;
    rep(i,1,n+1) {
        rep(j,1,n+1) {
            if(m[i][j]!=a1) continue;
            rep(k,1,n+1) {
                rep(l,1,n+1) {
                    if(m[k][l]!=a2) continue;
                    ans=min(ans,(k-i)*(k-i)+(l-j)*(l-j));
                }
            }
        }
    }
    cout << ans;
    return 0;
}