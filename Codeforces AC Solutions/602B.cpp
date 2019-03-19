/*
Problem Name: B - Approximating a Constant Range
Problem ID: 602B
Problem URL: https://codeforces.com/contest/602/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 48503342
Solution Time: 2019-01-17 19:20:27
Language: GNU C++17
Time consumed: 62 ms
Memory consumed: 4300 KB
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
const int inf = 2000000000;
const double eps = 0.0000001;
const double pi = acos(-1.0);
const int MOD = 998244353;
const int N  = 1e5+5;

int a[N];
multiset<int> s;

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
    int L = 0, R = 0, ans = 0;
    while(R<n) {
        s.insert(a[R]);
        while((*(--s.end()) - *(s.begin())) > 1)
        {
            s.erase(s.find(a[L]));
            L++;
        }
        ans = max(ans, R-L+1);
        R++;
    }
    cout << ans;
}