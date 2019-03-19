/*
Problem Name: B - Tape
Problem ID: 1110B
Problem URL: https://codeforces.com/contest/1110/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 49574547
Solution Time: 2019-02-07 17:02:24
Language: GNU C++17
Time consumed: 62 ms
Memory consumed: 2600 KB
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
const int N  = 5e5+5;
const int mx = 5e5;

vector<int> v;

signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n,m,k;
    cin >> n >> m >> k;
    int b[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> b[i];
    }
    for (int i = 1; i < n; ++i)
    {
        v.pb(b[i]-b[i-1]);
    }
    sort(v.begin(),v.end());
    int s = n;
    for (int i = 0; i < min(n-1,n-k); ++i)
    {
        s+=v[i]-1;
    }
    cout << s;
    return 0;
}