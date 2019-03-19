/*
Problem Name: A - Amusing Joke
Problem ID: 141A
Problem URL: https://codeforces.com/contest/141/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 47165220
Solution Time: 2018-12-17 15:11:35
Language: GNU C++17
Time consumed: 62 ms
Memory consumed: 0 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define pb push_back
#define pii pair<int,int>
#define fi first
#define se second
#define rep(i,a,b) for (int i=a; i<b; ++i)
#define dbg(x) { cerr<<#x<<": "<<x<< endl; }
#define dbg2(x,y) { cerr<<#x<<": "<<x<<" , "<<#y<<": "<<y<<endl; }
#define dbg3(x,y,z) { cerr<<#x<<": "<<x<<" , "<<#y<<": "<<y<<" , "<<#z<<": "<<z<<endl; }
#define eps 0.0000001
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#ifndef LOCAL
#define endl &#39;\n&#39;
#endif

int cc[100];

signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;
    
    string a,b,c;
    cin>>a>>b>>c;
    if(!(a.length()+b.length()==c.length())) return cout<<"NO",0;
    for (int i = 0; i < a.length(); ++i)
    {
        cc[a[i]]++;
    }
    for (int i = 0; i < b.length(); ++i)
    {
        cc[b[i]]++;
    }
    for (int i = 0; i < c.length(); ++i)
    {
        cc[c[i]]--;
    }
    rep(i,&#39;A&#39;,&#39;Z&#39;+1) {
        if(cc[i]!=0) return cout<<"NO",0;
    }
    cout<<"YES";
    return 0;
}