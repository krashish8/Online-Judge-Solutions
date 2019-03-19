/*
Problem Name: B - Preparation for International Women's Day
Problem ID: 1133B
Problem URL: https://codeforces.com/contest/1133/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 50945538
Solution Time: 2019-03-07 18:39:50
Language: GNU C++17
Time consumed: 78 ms
Memory consumed: 1600 KB
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

int c[105];

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
        c[a[i]%k]++;
    }
    int ans = 0;
    ans+=c[0]/2;
    for (int i = 1; i <= k/2; ++i)
    {
        if(2*i!=k)
        ans+=min(c[i],c[k-i]);
        else ans+=c[i]/2;
        // dbg(ans)
    }
    cout << ans*2;;
    return 0;
}