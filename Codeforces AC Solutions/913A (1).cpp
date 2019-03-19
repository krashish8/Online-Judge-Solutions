/*
Problem Name: A - Modular Exponentiation
Problem ID: 913A
Problem URL: https://codeforces.com/contest/913/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 49533100
Solution Time: 2019-02-06 17:40:01
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
#ifdef LOCAL
#define endl &#39;\n&#39;
#endif
const int inf = INT_MAX;
const double eps = 0.0000001;
const double PI = acos(-1.0);
const int MOD = 998244353;
const int N  = 2e5+5;
const int mx = 5e5;


signed main(){
    //freopen("input.txt","r",stdin);

    int n, m;
    cin >> n >> m;
    if(n>=31) {cout << m; return 0;}
    cout << (m&((1ll<<n)-1));
    return 0;
} 