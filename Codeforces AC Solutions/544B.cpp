/*
Problem Name: B - Sea and Islands
Problem ID: 544B
Problem URL: https://codeforces.com/contest/544/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 47683747
Solution Time: 2018-12-29 16:31:57
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
const int MOD = 998244353;
const int N  = 55;


signed main(){
    #ifdef LOCAL
        //freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n, m;
    cin >> n >> m;
    if(m>(n*n+1)/2) cout << "NO";
    else {
        cout << "YES\n";
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n; j++) {
                if((i+j)%2==0 && m!=0) {cout<<"L"; m--;}
                else cout<<"S";
            }
            cout << endl;
        }
    }
    return 0;
}