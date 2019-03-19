/*
Problem Name: C - Grid game
Problem ID: 1104C
Problem URL: https://codeforces.com/contest/1104/problem/C
Author: Ashish Kumar (ashishkr23438)
Solution ID: 48742244
Solution Time: 2019-01-22 18:18:11
Language: GNU C++14
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
#define dbg(x) { cout<<#x<<": "<<x<< endl; }
#define dbg2(x,y) { cout<<#x<<": "<<x<<" , "<<#y<<": "<<y<<endl; }
#define dbg3(x,y,z) { cout<<#x<<": "<<x<<" , "<<#y<<": "<<y<<" , "<<#z<<": "<<z<<endl; }
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#ifndef LOCAL
#define endl &#39;\n&#39;
#endif
const int inf = 2000000000;
const double eps = 0.0000001;
const double pi = acos(-1.0);
const int MOD = 998244353;
const int N  = 1e5+5;

int occ[4][4];

signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    string s;
    cin >> s;
    for (int i = 0; i < s.length(); ++i)
    {
        if(s[i]==&#39;1&#39;) {
            rep(j,0,2) {
                rep(k,0,3) {
                    if(!occ[j][k] && !occ[j][k+1]) {
                        occ[j][k] = 1;
                        occ[j][k+1] = 1;
                        cout << j+1 << " " << k+1 << endl;
                        goto a;
                    }
                }
            }
        }
        else {
            rep(j,2,3) {
                rep(k,0,4) {
                    if(!occ[j][k] && !occ[j+1][k]) {
                        occ[j][k] = 1;
                        occ[j+1][k] = 1;
                        cout << j+1 << " " << k+1 << endl;
                        goto a;
                    }
                }
            }
        }
        a:;
        rep(j,0,4) {
            if(occ[j][0] && occ[j][1] && occ[j][2] && occ[j][3])
                occ[j][0] = occ[j][1] = occ[j][2] = occ[j][3] = 0;
        }
    }
    return 0;
}