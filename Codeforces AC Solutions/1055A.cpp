/*
Problem Name: A - Metro
Problem ID: 1055A
Problem URL: https://codeforces.com/contest/1055/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 47681368
Solution Time: 2018-12-29 15:18:22
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
const int MOD = 998244353;
const int N  = 55;


signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n, m;
    cin >> n >> m;
    int a[n], b[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i)
    {
        cin >> b[i];
    }
    if(a[0]==0) return cout<<"NO",0;
    if(a[m-1]==1) return cout<<"YES",0;
    if(b[m-1]==0) return cout << "NO",0;
    for (int i = 0; i < n; ++i)
    {
        if(i>m-1 && a[i]==1 && b[i]==1 && b[m-1]==1) return cout<<"YES",0;
    }
    cout << "NO";
    return 0;
}