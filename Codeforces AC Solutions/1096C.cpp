/*
Problem Name: C - Polygon for the Angle
Problem ID: 1096C
Problem URL: https://codeforces.com/contest/1096/problem/C
Author: Ashish Kumar (ashishkr23438)
Solution ID: 47642565
Solution Time: 2018-12-28 18:34:09
Language: GNU C++17
Time consumed: 15 ms
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
const int N  = 20005;
const int MOD = 998244353;
 

signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int t;
    cin >> t;
    while (t--) {
        int a;
        cin >> a;
        for (int i = 3; i <= 998244353 ; ++i)
        {
            double z = 1.0*a/(180.0/i);
            if(abs(z-(int)z)<eps) {
                if(round(z)<=i-2) {
                    cout << i <<endl;
                    goto a;
                }
            }
        }
        a:;
    }
    return 0;
}