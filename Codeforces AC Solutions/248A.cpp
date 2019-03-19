/*
Problem Name: A - Cupboards
Problem ID: 248A
Problem URL: https://codeforces.com/contest/248/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46977858
Solution Time: 2018-12-13 20:42:59
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
#ifndef LOCAL
#define endl &#39;\n&#39;
#endif


signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n,c1=0,c2=0;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        int a,b;
        cin>>a>>b;
        if(!a) c1++;
        if(!b) c2++;
    }
    cout<<min({n-c1+c2,n-c2+c1,c1+c2,n-c1+n-c2});
    return 0;
}