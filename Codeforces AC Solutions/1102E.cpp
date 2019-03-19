/*
Problem Name: E - Monotonic Renumeration
Problem ID: 1102E
Problem URL: https://codeforces.com/contest/1102/problem/E
Author: Ashish Kumar (ashishkr23438)
Solution ID: 48188272
Solution Time: 2019-01-10 19:22:11
Language: GNU C++17
Time consumed: 249 ms
Memory consumed: 11400 KB
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
const int N  = 2e5+5;
const int mx = 5e5;

int power(int x, int y) {
    int res = 1;
    while(y > 0) {
        if(y & 1)
            res = (res*x)%MOD;
        y = y >> 1;
        x = (x*x)%MOD;
    }
    return res;
}

int a[N], pos[N];

signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    map<int, int> mp;
    for (int i = 0; i < n; ++i)
    {
        mp[a[i]] = i;
    }
    for (int i = 0; i < n; ++i)
    {
        a[i] = mp[a[i]];
    }
    for (int i = n-1; i >= 0; --i)
    {
        if(pos[a[i]]==0)
        pos[a[i]] = i;
    }
    int c = 0;
    int k = 0;
    do {
        int mx = k;
        for (int i = k; i <= mx; ++i)
        {
            mx = max(mx, pos[a[i]]);
        }

        k = mx + 1;
        c++;
    } while(k<n);
    cout << power(2,c-1);

    return 0;
}