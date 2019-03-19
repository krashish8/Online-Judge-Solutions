/*
Problem Name: B - Coins
Problem ID: 47B
Problem URL: https://codeforces.com/contest/47/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 47268001
Solution Time: 2018-12-19 18:14:20
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

vector<int> adj[3];

signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    string a[3];
    for (int i = 0; i < 3; ++i)
    {
        cin>>a[i];
        if(a[i][1]==&#39;>&#39;) adj[a[i][0]-&#39;A&#39;].pb(a[i][2]-&#39;A&#39;);
        else adj[a[i][2]-&#39;A&#39;].pb(a[i][0]-&#39;A&#39;);
    }
    int ind[3]={0};  //indegree
    queue<int> q;
    for (int i = 0; i < 3; ++i)
    {
        for(auto it:adj[i]) {
            ind[it]++;
        }
    }
    for (int i = 0; i < 3; ++i)
    {
        if(ind[i]==0) q.push(i);
    }
    int cnt=0;
    vector <int> topo;
    while(!q.empty()) {
        int u = q.front();
        q.pop();
        topo.pb(u);
        for(auto it:adj[u]) {
            if(--ind[it]==0) q.push(it);
        }
        cnt++;
    }
    if(cnt!=3) cout<<"Impossible";
    else {
        reverse(topo.begin(),topo.end());
        for(auto it:topo) {
            cout<<(char)(it+&#39;A&#39;);
        }
    }
    return 0;
}