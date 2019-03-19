/*
Problem Name: B - Olympic Medal
Problem ID: 215B
Problem URL: https://codeforces.com/contest/215/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46706754
Solution Time: 2018-12-07 10:39:59
Language: GNU C++14
Time consumed: 156 ms
Memory consumed: 100 KB
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



signed main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif  
    IOS;
    
    int a,b;
    int n,m,k;
    cin>>n;
    int r1=0,p1=0,p2=5005;
    while(n--) {
        int x;
        cin>>x;
        r1=max(r1,x);
    }
    cin>>m;
    int y[m];
    for (int i = 0; i < m; ++i)
    {
        cin>>y[i];
    }
    cin>>k;
    int z[k];
    for (int i = 0; i < k; ++i)
    {
        cin>>z[i];
    }
    cin>>a>>b;
    double p2p1=2000000005;
    rep(i,0,m) {
        rep(j,0,k) {
            p2p1=min(p2p1,z[j]/(double)y[i]);
        }
    }
    cout<<fixed<<setprecision(12)<<sqrt(r1*r1/(p2p1*a/b+1));
    return 0;
}