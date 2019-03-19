/*
Problem Name: B - Array K-Coloring
Problem ID: 1102B
Problem URL: https://codeforces.com/contest/1102/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 48543728
Solution Time: 2019-01-18 21:06:10
Language: GNU C++17
Time consumed: 78 ms
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

set<int> s;

signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    int mx = 0;
    for (int i = 1; i < 5001; ++i)
    {
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            if(a[j]==i) cnt++;
        }
        mx = max(mx,cnt);
    }
    if(mx > k) return cout << "NO",0;

    int b[n];
    int v = 1;
    for (int i = 1; i < 5001; ++i)
    {
        for (int j = 0; j < n; j++) {
            if(a[j]==i) {
                b[j] = v;
                v++;
                if(v>k) v = 1;
            }
        }
    }

    cout << "YES\n";
    for (int i = 0; i < n; ++i)
    {
        cout << b[i] << " ";
    }
    return 0;
}