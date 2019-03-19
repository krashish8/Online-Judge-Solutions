/*
Problem Name: D - Sum in the tree
Problem ID: 1099D
Problem URL: https://codeforces.com/contest/1099/problem/D
Author: Ashish Kumar (ashishkr23438)
Solution ID: 48010913
Solution Time: 2019-01-05 22:02:57
Language: GNU C++17
Time consumed: 93 ms
Memory consumed: 16100 KB
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
const int N  = 1e5+5;

vector<int> adj[N];
int d[N];
vector<int> dd[N];
int p[N],s[N],a[N],mn[N];
int mx=-inf;

void dfs(int s, int e) {
    d[s]=d[e]+1;
    dd[d[s]].pb(s);
    mx=max(mx,d[s]);
    for(auto u:adj[s])
    {
        if(u==e) continue;
        dfs(u,s);
    }
}


signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n,flag=0;
    cin >> n;
    p[1]=-1;
    for (int i = 2; i <= n; ++i)
    {
        if(p[i]!=0) flag=1;
        cin >> p[i];
        adj[p[i]].pb(i);
    }
    for (int i = 1; i <= n; ++i)
    {
        cin >> s[i];
    }
    if(flag==1) return cout << "Impossible",0;
    dfs(1,0);
    for (int i = 1; i <= n; i++) {
        if(s[i]!=-1) continue;
        int mn = inf;
        for(auto node:adj[i]) {
            if(s[node]!=-1)
                mn = min (mn, s[node]);
        }
        if(mn==inf) mn = -1;
        s[i]=mn;
    }
    for (int i = 2; i <= mx; i++) {
        for(auto node:dd[i]) {
            if(s[node]==-1)
            {
                s[node] = s[p[node]];
            }
            else if(s[p[node]]>s[node]) return cout << -1,0;
        }
    }
    a[1] = s[1];
    for (int i = 2; i <= mx; i++) {
        for(auto node:dd[i]) {

            a[node] = s[node]-s[p[node]];
        }
    }
    int ans = 0;
    for (int i = 1; i <=n; i++) ans+=a[i];
    cout << ans;

    return 0;
}