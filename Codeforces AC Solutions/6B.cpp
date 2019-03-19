/*
Problem Name: B - President's Office
Problem ID: 6B
Problem URL: https://codeforces.com/contest/6/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46621319
Solution Time: 2018-12-04 21:21:00
Language: GNU C++14
Time consumed: 31 ms
Memory consumed: 0 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define mod 1000000007
#define pb push_back
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
    char c;

    cin>>a>>b>>c;
    char d[a][b];
    rep(i,0,a) {
        rep(j,0,b) {
            cin>>d[i][j];
        }
    }
    int ck[26]={0},ans=0;
    ck[c-&#39;A&#39;]=1;
    rep(i,0,a) {
        rep(j,0,b) {
            if(d[i][j]==c) {
                if(i-1>=0 && d[i-1][j]!=&#39;.&#39; && !ck[d[i-1][j]-&#39;A&#39;]) {ck[d[i-1][j]-&#39;A&#39;]=1;ans++;}
                if(i+1<a && d[i+1][j]!=&#39;.&#39; && !ck[d[i+1][j]-&#39;A&#39;]) {ck[d[i+1][j]-&#39;A&#39;]=1;ans++;}
                if(j-1>=0 && d[i][j-1]!=&#39;.&#39; && !ck[d[i][j-1]-&#39;A&#39;]) {ck[d[i][j-1]-&#39;A&#39;]=1;ans++;}
                if(j+1<b && d[i][j+1]!=&#39;.&#39; && !ck[d[i][j+1]-&#39;A&#39;]) {ck[d[i][j+1]-&#39;A&#39;]=1;ans++;}
            }
        }
    }
    cout<<ans;
    return 0;
}