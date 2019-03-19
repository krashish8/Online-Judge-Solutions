/*
Problem Name: B - Array Stabilization
Problem ID: 1095B
Problem URL: https://codeforces.com/contest/1095/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 47558712
Solution Time: 2018-12-27 17:44:25
Language: GNU C++17
Time consumed: 61 ms
Memory consumed: 800 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double
#define pb push_back
#define pii pair<int,int>
#define fi first
#define se second
#define rep(i,a,b) for (int i=a; i<b; ++i)
#define dbg(x) { cerr<<#x<<": "<<x<< endl; }
#define dbg2(x,y) { cerr<<#x<<": "<<x<<" , "<<#y<<": "<<y<<endl; }
#define dbg3(x,y,z) { cerr<<#x<<": "<<x<<" , "<<#y<<": "<<y<<" , "<<#z<<": "<<z<<endl; }
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#ifndef LOCAL
#define endl &#39;\n&#39;
#endif
const int inf = INT_MAX;
const int MOD = 1073741824;
const double eps = 0.0000001;
const double PI = acos(-1.0);
const int N  = 1e6+5;


signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    sort(a,a+n);
    if(n==2) return cout<<0,0;
    int mn=a[1],mx=a[n-2];
    cout<<min(a[n-1]-mn,mx-a[0]);
    return 0;
}