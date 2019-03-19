/*
Problem Name: A - Inna and Pink Pony
Problem ID: 374A
Problem URL: https://codeforces.com/contest/374/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 51217866
Solution Time: 2019-03-12 14:22:51
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



signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n,m,x,y,a,b;
    cin>>n>>m>>x>>y>>a>>b;
    int p = (x-1)%a + (y-1)%b;
    int q = (n-x)%a + (y-1)%b;
    int r = (x-1)%a + (m-y)%b;
    int s = (n-x)%a + (m-y)%b;
    if((x==1 && y==1) || (x==n && y==1) || (x==1 && y==m) || (x==n && y==m)) return cout << 0,0;
    if(p && q && r && s) return cout << "Poor Inna and pony!",0;
    if(p || ((x-1)/a - (y-1)/b)%2 !=0) p = inf;
    else p = max((x-1)/a,(y-1)/b);
    if(q || ((n-x)/a - (y-1)/b)%2 !=0) q = inf;
    else q = max((n-x)/a, (y-1)/b);
    if(r || ((x-1)/a - (m-y)/b)%2 !=0) r = inf;
    else r = max((x-1)/a, (m-y)/b);
    if(s || ((n-x)/a - (m-y)/b)%2 !=0) s = inf;
    else s = max((n-x)/a, (m-y)/b);

    if ((n-1) < a || (m-1)<b || min({p,q,r,s})==inf) cout << "Poor Inna and pony!";
    else cout << min({p,q,r,s});
    return 0;
}