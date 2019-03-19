/*
Problem Name: A - Flag
Problem ID: 16A
Problem URL: https://codeforces.com/contest/16/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46977703
Solution Time: 2018-12-13 20:36:38
Language: GNU C++17
Time consumed: 62 ms
Memory consumed: 0 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define pb push_back
#define pii pair<int,int>
#define fi first
#define se second
#define rep(i,a,b) for (int i=a; i<b; ++i)
#define dbg(x) { cout<< #x << ": " << (x) << endl; }
#define dbg2(x,y) { cout<< #x << ": " << (x) << " , " << #y << ": " << (y) << endl; }
#define eps 0.0000001
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#ifndef LOCAL
#define endl &#39;\n&#39;
#endif

int a[1005];

signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n,m;
    cin>>n>>m;
    char c[n][m];
    rep(i,0,n) {
        rep(j,0,m) cin>>c[i][j];
    }
    rep(i,0,n) {
        char cc = c[i][0];
        rep(j,1,m) {
            if(cc!=c[i][j]) return cout<<"NO",0;
        }
    }
    
    rep(i,1,n) {
        char cc = c[i-1][0];
        if(cc==c[i][0]) return cout<<"NO",0;
    }
    cout<<"YES";
    return 0;
}