/*
Problem Name: B - Bear and Friendship Condition
Problem ID: 791B
Problem URL: https://codeforces.com/contest/791/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 47703746
Solution Time: 2018-12-29 21:36:04
Language: GNU C++17
Time consumed: 124 ms
Memory consumed: 11500 KB
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
const int N  = 150005;

vector<int> adj[N];
bool vis[N];
int edges, vertex;

void dfs (int n) {
    edges++;
    if(vis[n]) return;
    vertex++;
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

    int n, m;
    cin >> n>> m;
    for (int i = 0; i < m; ++i)
    {
        int a,b;
        cin >> a >>b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    for (int i = 1; i <= n; ++i)
    {
        if(vis[i]) continue;
        edges=0;
        vertex=0;
        dfs(i);
        if(vertex*(vertex-1)/2!=edges/2) return cout<<"NO",0;
    }
    cout<<"YES";

    return 0;
}