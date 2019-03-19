/*
Problem Name: B - Squares and Segments
Problem ID: 1099B
Problem URL: https://codeforces.com/contest/1099/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 47982301
Solution Time: 2019-01-05 19:55:12
Language: GNU C++17
Time consumed: 31 ms
Memory consumed: 300 KB
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
const double eps = 0.0000001;
const double PI = acos(-1.0);
const int MOD = 1e9+7;
const int N  = 150005;

signed main(){
    #ifdef LOCAL
        //freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n, i;
    cin >> n;
    int m = sqrt(n);
    int ans = m;
    n-=m*m;
    ans*=2;
    if(m!=0)
    ans+=(n+m-1)/m;
    cout  << ans ;
    return 0;
}