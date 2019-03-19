/*
Problem Name: B - Xenia and Ringroad
Problem ID: 339B
Problem URL: https://codeforces.com/contest/339/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 49778654
Solution Time: 2019-02-11 19:35:31
Language: GNU C++17
Time consumed: 342 ms
Memory consumed: 1000 KB
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
    int a[m];
    for (int i = 0; i < m; ++i)
    {
        cin >> a[i];
    }
    for (int i = 1; i < m; i++) {
        if(a[i]<a[i-1]) a[i] += (a[i-1]-a[i]+n-1)/n*n;
    }
    cout << a[m-1]-1;
    return 0;
} 