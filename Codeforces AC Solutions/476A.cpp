/*
Problem Name: A - Dreamoon and Stairs
Problem ID: 476A
Problem URL: https://codeforces.com/contest/476/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46682122
Solution Time: 2018-12-06 15:31:49
Language: GNU C++14
Time consumed: 31 ms
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
#define endl &#39;\n&#39;


signed main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif  
    IOS;
    
    int n,m;
    cin>>n>>m;
    int a=(n+1)/2,b=n;
    rep(i,a,b+1) {
        if(i%m==0) {cout<<i;return 0;}
    }
    cout<<-1;
    return 0;
}