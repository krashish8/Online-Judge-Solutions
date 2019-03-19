/*
Problem Name: B - Two Buttons
Problem ID: 520B
Problem URL: https://codeforces.com/contest/520/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 47619136
Solution Time: 2018-12-28 15:00:59
Language: GNU C++17
Time consumed: 31 ms
Memory consumed: 800 KB
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
const int N  = 20005;

vector<int> adj[N];
bool vis[N];
int d[N];
queue<int> q;

signed main(){
    #ifdef LOCAL
        //freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    for(int i = 1; i <= 10000; i++) {
        adj[i].pb(2*i);
        if(i!=1)
            adj[i].pb(i-1);
    }
    int n,m;
    cin >> n >> m;
    vis[n]=1;
    q.push(n);
    d[n]=0;
    while(!q.empty()) {
        int s = q.front();
        q.pop();
        for(auto u:adj[s]) {
            if(vis[u]) continue;
            vis[u]=1;
            d[u]=d[s]+1;
            q.push(u);
        }
        
    }
    cout<<d[m];
    return 0;
}