/*
Problem Name: A - Far Relative’s Birthday Cake
Problem ID: 629A
Problem URL: https://codeforces.com/contest/629/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46856671
Solution Time: 2018-12-10 18:17:17
Language: GNU C++17
Time consumed: 31 ms
Memory consumed: 0 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define pb push_back
#define pii pair<int,int>
#define fi first
#define se second
#define rep(i,a,b) for (int i=a; i<b; ++i)
#define dbg(x) { cout<< #x << ": " << (x) << endl; }
#define dbg2(x,y) { cout<< #x << ": " << (x) << " , " << #y << ": " << (y) << endl; }
#define eps 0.0000001
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)




signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;
    
    int n;
    cin>>n;
    char c[n][n];
    rep(i,0,n) {
        rep(j,0,n)
            cin>>c[i][j];
    }
    int ans=0;
    rep(i,0,n) {
        int cnt=0;
        rep(j,0,n)
            if(c[i][j]==&#39;C&#39;) cnt++;
        ans+=cnt*(cnt-1)/2;
    }
    rep(j,0,n) {
        int cnt=0;
        rep(i,0,n)
            if(c[i][j]==&#39;C&#39;) cnt++;
        ans+=cnt*(cnt-1)/2;
    }
    cout<<ans;
    return 0;
}