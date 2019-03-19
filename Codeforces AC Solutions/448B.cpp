/*
Problem Name: B - Suffix Structures
Problem ID: 448B
Problem URL: https://codeforces.com/contest/448/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 47661903
Solution Time: 2018-12-28 22:35:03
Language: GNU C++17
Time consumed: 31 ms
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

    string s, t;
    cin >> s >>t;
    int l1 = s.length(), l2 = t.length();
    int k = 0;
    for (int i = 0; i < l1; ++i)
    {
        if(s[i]==t[k]) k++;
    }
    if(k==l2) return cout<<"automaton",0;
    int cnt[26]={0};
    for (int i = 0; i < l1; ++i)
    {
        cnt[s[i]-&#39;a&#39;]++;
    }
    for (int i = 0; i < l2; ++i)
    {
        cnt[t[i]-&#39;a&#39;]--;
    }
    int flag=0;
    for (int i = 0; i < 26; ++i)
    {
        if(cnt[i]!=0) flag=1;
    }
    if(flag==0) return cout<<"array",0;
    for (int i = 0; i < 26; ++i)
    {
        if(cnt[i]<0) return cout<<"need tree",0;
    }
    cout<<"both";
    return 0;
}