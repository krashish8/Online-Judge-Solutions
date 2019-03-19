/*
Problem Name: A - Domino
Problem ID: 353A
Problem URL: https://codeforces.com/contest/353/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 50763928
Solution Time: 2019-03-04 00:42:01
Language: GNU C++17
Time consumed: 62 ms
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

    int n;
    cin >> n;
    int a[n],b[n],s1=0,s2=0;
    int f = 0;
    rep(i,0,n) {
        cin >> a[i] >> b[i];
        if(a[i]%2 + b[i]%2 == 1) f=1;
        s1+=a[i], s2+=b[i];
    }
    if(s1%2==0 && s2%2==0) return cout << 0, 0;
    if(s1%2 + s2%2 == 1) return cout << -1,0;
    if(s1%2 + s2%2 == 2) {
        if(f==1) cout << 1;
        else cout << -1;
    }
    return 0;
}