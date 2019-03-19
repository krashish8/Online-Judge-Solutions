/*
Problem Name: B - Inna and New Matrix of Candies
Problem ID: 400B
Problem URL: https://codeforces.com/contest/400/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46715082
Solution Time: 2018-12-07 13:41:01
Language: GNU C++14
Time consumed: 46 ms
Memory consumed: 1100 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define mod 1000000007
#define pb push_back
#define pii pair<int,int>
#define fi first
#define se second
#define rep(i,a,b) for(int i=a;i<b;++i)
#define dbg(x) { cout<< #x << ": " << (x) << endl; }
#define dbg2(x,y) { cout<< #x << ": " << (x) << " , " << #y << ": " << (y) << endl; }
#define eps 0.0000001
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define endl &#39;\n&#39;

set<int> s;

signed main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif  
    IOS;
    
    
    int n,m;
    cin>>n>>m;
    char c[n][m];
    rep(i,0,n) {
        rep(j,0,m) {
            cin>>c[i][j];
        }
    }
    int mn=-1;
    int c1=0,c2=0;
    rep(i,0,n) {
        rep(j,0,m) {
            if(c[i][j]==&#39;G&#39;) c1=j;
            if(c[i][j]==&#39;S&#39;) c2=j;
        }
        if(c2<c1) {cout<<-1;return 0;}
        s.insert(c2-c1);
    }
    cout<<s.size();
    
    return 0;
}