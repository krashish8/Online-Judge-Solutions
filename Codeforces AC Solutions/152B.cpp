/*
Problem Name: B - Steps
Problem ID: 152B
Problem URL: https://codeforces.com/contest/152/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46719473
Solution Time: 2018-12-07 15:39:42
Language: GNU C++14
Time consumed: 92 ms
Memory consumed: 0 KB
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
//#define endl &#39;\n&#39;



signed main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif  
    //IOS;
    
    int n,m;
    cin>>n>>m;
    int x,y;
    cin>>x>>y;
    int v;
    cin>>v;
    int ans=0;
    while(v--) {
        int a,b;
        cin>>a>>b;
        for(int step = 2000000005; step; step/=2) {
            while(x+step*a>=1 && x+step*a<=n && y+step*b>=1 && y+step*b<=m) {
                ans+=step;
                x=x+step*a;
                y=y+step*b;
            }
        }
    }
    cout<<ans;
    return 0;
}