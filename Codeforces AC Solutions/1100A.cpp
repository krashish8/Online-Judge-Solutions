/*
Problem Name: A - Roman and Browser
Problem ID: 1100A
Problem URL: https://codeforces.com/contest/1100/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 48333259
Solution Time: 2019-01-13 17:44:32
Language: GNU C++17
Time consumed: 46 ms
Memory consumed: 300 KB
*/
#include<bits/stdc++.h>
using namespace std;

//#define int unsigned long long int
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
const int N  = 1e5+5;


signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n,k;
    cin >> n >> k;
    int a[n];
    int c1 = 0, c2 = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        if(a[i]==1) c1++;
        else c2++;
    }
    int ans = 0;
    for (int i = 0; i < k; ++i)
    {
        int c3 = c1, c4 = c2;
        for (int j = i; j <n;j+=k) {
            if(a[j]==1) c3--;
            else c4--;
        }
        ans = max(ans,abs(c3-c4));

    }
    cout << ans;
    return 0;
}