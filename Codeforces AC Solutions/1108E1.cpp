/*
Problem Name: E1 - Array and Segments (Easy version)
Problem ID: 1108E1
Problem URL: https://codeforces.com/contest/1108/problem/E1
Author: Ashish Kumar (ashishkr23438)
Solution ID: 48853810
Solution Time: 2019-01-23 21:03:47
Language: GNU C++14
Time consumed: 31 ms
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
#define dbg(x) { cout<<#x<<": "<<x<< endl; }
#define dbg2(x,y) { cout<<#x<<": "<<x<<" , "<<#y<<": "<<y<<endl; }
#define dbg3(x,y,z) { cout<<#x<<": "<<x<<" , "<<#y<<": "<<y<<" , "<<#z<<": "<<z<<endl; }
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#ifndef LOCAL
#define endl &#39;\n&#39;
#endif
const int inf = 2000000000;
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

    int n, m;
    cin >> n >> m;
    int a[n],r[m],l[m];
    rep(i,0,n) cin >> a[i];
    rep(j,0,m) {cin >> l[j]; cin >> r[j]; l[j]--; r[j]--;}
    int ans = -1;
    vector<int> ansv;
    rep(i,0,n) {
        int b[n];
        rep(j,0,n) b[j] = a[j];
        vector<int> v;
        rep(j,0,m) {
            if(!(i>=l[j] && i<=r[j]))
            {
                rep(k,l[j],r[j]+1) {
                    b[k]--;
                }
                v.pb(j);
            }
        }
        int mn = 1e6+5;
        rep(j,0,n)
        {
            if(mn>b[j])
                mn = b[j];
        }
        if(a[i] - mn > ans) {
            ans = a[i] - mn;
            ansv = v;
        }

    }
    cout << ans << endl << ansv.size() << endl;
    for(auto it: ansv)
        cout << it+1 << " ";
    return 0;
}