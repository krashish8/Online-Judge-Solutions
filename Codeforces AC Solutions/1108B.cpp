/*
Problem Name: B - Divisors of Two Integers
Problem ID: 1108B
Problem URL: https://codeforces.com/contest/1108/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 48805254
Solution Time: 2019-01-23 17:41:28
Language: GNU C++14
Time consumed: 31 ms
Memory consumed: 100 KB
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

int c[10005];

signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n;
    cin >> n;
    int a[n];
    int mx = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        c[a[i]]++;
        mx = max(mx,a[i]);
    }
    for (int i = 1; i <= mx; ++i)
    {
        if(mx%i==0) c[i]--;
    }
    int cc = 0;
    for (int i = 0; i < 10005; ++i)
    {
        if(c[i]==1) cc = i;
    }
    cout << mx << " " << cc;
    return 0;
}