/*
Problem Name: E - Polycarp's New Job
Problem ID: 1101E
Problem URL: https://codeforces.com/contest/1101/problem/E
Author: Ashish Kumar (ashishkr23438)
Solution ID: 48275321
Solution Time: 2019-01-12 08:21:55
Language: GNU C++17
Time consumed: 389 ms
Memory consumed: 200 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define int unsigned long long int
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
const int MOD = 998244353;
const int N  = 2e5+5;
const int mx = 5e5;



signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n;
    cin >> n;
    int m1 = 0, m2 = 0;
    while (n--) {
        char a;
        int b,c;
        cin >> a >> b >> c;
        if(a==&#39;+&#39;) {
            if(b>c) swap(b,c);
            m1 = max(m1,b);
            m2 = max(m2,c);
        }
        else {
            if(b>c) swap(b,c);
            if(m1<=b && m2 <= c) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}