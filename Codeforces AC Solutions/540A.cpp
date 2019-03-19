/*
Problem Name: A - Combination Lock
Problem ID: 540A
Problem URL: https://codeforces.com/contest/540/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46940349
Solution Time: 2018-12-12 19:12:49
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
    string s,t;
    cin>>s>>t;
    int ans=0;
    for (int i = 0; i < n; ++i)
    {
        int a = min(s[i],t[i])-&#39;0&#39;;
        int b = max(s[i],t[i]) -&#39;0&#39;;
        int ss = min(b-a,a+10-b);
        ans+=ss;
    }
    cout<<ans;
    return 0;
}