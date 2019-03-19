/*
Problem Name: B - Build a Contest
Problem ID: 1100B
Problem URL: https://codeforces.com/contest/1100/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 48338352
Solution Time: 2019-01-13 17:58:04
Language: GNU C++17
Time consumed: 61 ms
Memory consumed: 600 KB
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

int cnt[100005];

signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n,m,c=0;
    cin >> n >>m;
    for (int i = 0; i < m; ++i)
    {
        int k;
        cin >> k;
        cnt[k]++;
        if(cnt[k]==1) c++;
        if(c!=n) cout << "0";
        else {
            rep(j,1,n+1) {
                cnt[j]--;
                if(cnt[j]==0) c--;
            }
            cout << "1";
        }
    }
    return 0;
}