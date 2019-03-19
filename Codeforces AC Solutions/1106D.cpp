/*
Problem Name: D - Lunar New Year and a Wander
Problem ID: 1106D
Problem URL: https://codeforces.com/contest/1106/problem/D
Author: Ashish Kumar (ashishkr23438)
Solution ID: 49258422
Solution Time: 2019-01-31 16:04:42
Language: GNU C++17
Time consumed: 140 ms
Memory consumed: 18200 KB
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

vector<int> adj[N];
bool vis[N];
vector<int> ans;
set<int> s;

void dfs (int n) {
	if(vis[n]) return;
	vis[n] = 1;
	ans.pb(n);
	for(auto u:adj[n])
	{
		if(!vis[u])
		{
			s.insert(u);
		}
	}
	if(s.empty()) return;
	auto it = s.begin();
	int e = *it;
	s.erase(it);
	dfs(e);

}

signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= m; ++i)
	{
		int a,b;
		cin >> a >> b;
		adj[a].pb(b);
		adj[b].pb(a);
	}
	dfs(1);
	for(auto it:ans)
		cout << it << " ";
    return 0;
}