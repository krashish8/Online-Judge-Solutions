/*
Problem Name: A - Perfect Permutation
Problem ID: 233A
Problem URL: https://codeforces.com/contest/233/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 50763215
Solution Time: 2019-03-04 00:00:04
Language: GNU C++17
Time consumed: 92 ms
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
const int N  = 5e5+5;



signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n;
    cin >> n;
    if (n%2==1) {
        cout << -1;
    }
    else {
        for (int i = 1; i <= n; ++i)
        {
            if(i%2==1)
            cout << i+1 << " ";
            else cout << i-1 << " ";
        }
    }
    return 0;
}