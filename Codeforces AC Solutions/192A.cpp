/*
Problem Name: A - Funky Numbers
Problem ID: 192A
Problem URL: https://codeforces.com/contest/192/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 51072438
Solution Time: 2019-03-09 11:12:20
Language: GNU C++17
Time consumed: 62 ms
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
    for (int i = 1; i*(i+1)/2 <= n; i++) {
        int a = i*(i+1)/2;
        int b = n-a;
        if(b<=0) break;
        if(2*b==(int)sqrt(2*b)*((int)sqrt(2*b)+1))
            return cout << "YES",0;
    }
    cout << "NO";
    return 0;
}