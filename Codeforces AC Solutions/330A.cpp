/*
Problem Name: A - Cakeminator
Problem ID: 330A
Problem URL: https://codeforces.com/contest/330/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46826833
Solution Time: 2018-12-09 22:01:57
Language: GNU C++17
Time consumed: 62 ms
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
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif  
    IOS;
    
    int x,y;
    cin>>x>>y;
    char c[x][y];
    int a[x]={0},b[y]={0};
    rep(i,0,x) {
        rep(j,0,y) {
            cin>>c[i][j];
            if(c[i][j]==&#39;S&#39;) a[i]=1,b[j]=1; 
        }
    }
    int cnt=0;
    
    rep(i,0,x) {
        rep(j,0,y) {
            if(a[i] && b[j]) cnt++;
        }
    }
    cout<<x*y-cnt;
    return 0;
}