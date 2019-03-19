/*
Problem Name: A - Watching a movie
Problem ID: 499A
Problem URL: https://codeforces.com/contest/499/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 50763394
Solution Time: 2019-03-04 00:10:35
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
const int N  = 5e5+5;



signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n, x;
    cin >> n >> x;
    int a[n],b[n],c=0;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i] >> b[i];
        c+=(b[i]-a[i])+1;
    }
    int t=(a[0]-1)/x*x+1;
    c+=a[0]-t;
    for (int i = 1; i < n; ++i)
    {
        int t = (a[i]-b[i-1]-1)/x*x+b[i-1]+1;
        c+=a[i]-t;
    }
    cout << c;
    return 0;
}