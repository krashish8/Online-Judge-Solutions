/*
Problem Name: C - NN and the Optical Illusion
Problem ID: 1100C
Problem URL: https://codeforces.com/contest/1100/problem/C
Author: Ashish Kumar (ashishkr23438)
Solution ID: 48342130
Solution Time: 2019-01-13 18:10:48
Language: GNU C++17
Time consumed: 31 ms
Memory consumed: 200 KB
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
const double pi = acos(-1.0);
const int MOD = 998244353;
const int N  = 1e5+5;


signed main(){
    #ifdef LOCAL
        //freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n,r;
    cin >> n >>r;
    double a = 2*cos(pi/n)/sin(2*pi/n)-1;
    //dbg(a);
    cout << fixed << setprecision(10) << r/a;
    return 0;
}