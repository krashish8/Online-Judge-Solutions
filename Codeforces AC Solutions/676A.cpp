/*
Problem Name: A - Nicholas and Permutation
Problem ID: 676A
Problem URL: https://codeforces.com/contest/676/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 47395822
Solution Time: 2018-12-23 14:07:52
Language: GNU C++17
Time consumed: 31 ms
Memory consumed: 0 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double
#define pb push_back
#define pii pair<int,int>
#define fi first
#define se second
#define inf INT_MAX
#define rep(i,a,b) for (int i=a; i<b; ++i)
#define dbg(x) { cerr<<#x<<": "<<x<< endl; }
#define dbg2(x,y) { cerr<<#x<<": "<<x<<" , "<<#y<<": "<<y<<endl; }
#define dbg3(x,y,z) { cerr<<#x<<": "<<x<<" , "<<#y<<": "<<y<<" , "<<#z<<": "<<z<<endl; }
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

    int n;
    cin >> n;
    int a[n];
    int mx=0;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        if(a[i]==1) mx=max({mx,n-1-i,i});
        if(a[i]==n) mx=max({mx,n-1-i,i});
    }
    cout<<mx;
    
    return 0;
}