/*
Problem Name: B - DZY Loves Chemistry
Problem ID: 445B
Problem URL: https://codeforces.com/contest/445/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 47660787
Solution Time: 2018-12-28 21:53:30
Language: GNU C++17
Time consumed: 31 ms
Memory consumed: 200 KB
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
const int MOD = 998244353;
const int N  = 55;

vector<int> adj[N];
bool vis[N];

void dfs(int n) {
    if(vis[n]) return;
    vis[n]=1;
    for(auto it:adj[n]) {
        dfs(it);
    }
}

signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n, m, comp = 0;
    cin >> n >> m;
    for (int i = 0; i < m; ++i)
    {
        int a, b;
        cin >> a >> b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    for (int i = 1; i <= n; ++i)
    {
        if(vis[i]) continue;
        dfs(i);
        comp++;
    }
    cout<<(1ll<<(n-comp));
    return 0;
}