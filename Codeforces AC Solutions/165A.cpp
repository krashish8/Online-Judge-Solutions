/*
Problem Name: A - Supercentral Point
Problem ID: 165A
Problem URL: https://codeforces.com/contest/165/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 50763734
Solution Time: 2019-03-04 00:29:32
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

    int n, c=0;
    cin >> n;
    int p[n], q[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> p[i] >> q[i];
    }
    rep(i,0,n) {
        int f = 0, g=0;
        rep(j,0,n) {
            if(i==j) continue;
            if(p[i]==p[j] && q[i]>q[j]) f=1;
            if(p[i]==p[j] && q[i]<q[j]) g=1;
            if(f&&g) break;
        }
        if(!f || !g) continue;
        f=0; g=0;
        rep(j,0,n) {
            if(i==j) continue;
            if(q[i]==q[j] && p[i]>p[j]) f=1;
            if(q[i]==q[j] && p[i]<p[j]) g=1;
        }
        if(f&&g) c++;
    }
    cout << c;
    return 0;
}