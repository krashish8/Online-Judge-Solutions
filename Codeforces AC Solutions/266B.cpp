/*
Problem Name: B - Queue at the School
Problem ID: 266B
Problem URL: https://codeforces.com/contest/266/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 48394101
Solution Time: 2019-01-14 19:47:56
Language: GNU C++17
Time consumed: 62 ms
Memory consumed: 200 KB
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
const double pi = acos(-1.0);
const int MOD = 998244353;
const int N  = 1e5+5;


signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n,t;
    cin >> n >> t;
    string a;
    cin >> a;
    rep(j,0,t)
    for (int i = 0; i < n-1; ++i)
    {
        if(a[i]==&#39;B&#39; && a[i+1]==&#39;G&#39;) {
            a[i] = &#39;G&#39;; a[i+1] = &#39;B&#39;;
            i++;
        }
    }
    cout << a;
    return 0;
}