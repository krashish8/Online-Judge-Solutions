/*
Problem Name: B - Kolya and Tanya
Problem ID: 584B
Problem URL: https://codeforces.com/contest/584/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 47701196
Solution Time: 2018-12-29 19:48:58
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
const int MOD = 1e9+7;
const int N  = 55;

int power(int x, int y) {
    int res = 1;
    x = x % MOD;
    while(y!=0) {
        if(y & 1) res = (res*x)%MOD;
        y = y >> 1;
        x = (x*x)%MOD;
    }
    return res;
}

signed main(){
    #ifdef LOCAL
        //freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n;
    cin >> n;
    n=n*3;
    cout << (power(3,n)-power(7,n/3)+MOD)%MOD;

    return 0;
}