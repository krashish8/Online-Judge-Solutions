/*
Problem Name: B - Students and Shoelaces
Problem ID: 129B
Problem URL: https://codeforces.com/contest/129/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 47274315
Solution Time: 2018-12-19 21:24:43
Language: GNU C++17
Time consumed: 62 ms
Memory consumed: 400 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double
#define pb push_back
#define pii pair<int,int>
#define fi first
#define se second
#define inf INT_MAX
#define rep(i,a,b) for (int i=a; i<b; ++i)
#define dbg(x) { cerr<<#x<<": "<<x<< endl; }
#define dbg2(x,y) { cerr<<#x<<": "<<x<<" , "<<#y<<": "<<y<<endl; }
#define dbg3(x,y,z) { cerr<<#x<<": "<<x<<" , "<<#y<<": "<<y<<" , "<<#z<<": "<<z<<endl; }
#define eps 0.0000001
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#ifndef LOCAL
#define endl &#39;\n&#39;
#endif

vector<int> adj[105];

signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n,k;
    cin>>n>>k;
    for (int i = 0; i < k; ++i)
    {
        int a,b;
        cin>>a>>b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    int c=0;
    while(true) {
        vector<int> v;
        for (int i = 1; i <= n; ++i)
        {
            if(adj[i].size()==1) {
                v.pb(i);
            }
        }
        for(auto it:v) {
            for (int i = 1; i <= n; ++i)
            {
                adj[i].erase(remove(adj[i].begin(), adj[i].end(), it), adj[i].end());
            }
            adj[it].clear();
        }
        
        if(v.size()) c++;
        else break;
    }
    cout<<c;
    

    return 0;
}