/*
Problem Name: B - Hopscotch
Problem ID: 141B
Problem URL: https://codeforces.com/contest/141/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 47684550
Solution Time: 2018-12-29 17:00:08
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
const int MOD = 998244353;
const int N  = 55;


signed main(){
    #ifdef LOCAL
        //freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int a, x, y;
    cin >> a >> x >> y;
    double l = a/2.0;
    if(y%a==0) return cout<<-1,0;
    y=y/a+1;
    if(x==0 && y%2!=0 && y!=1) return cout<<-1,0;
    if(y<=2 || y%2==0) l = a/2.0;
    else l = a;
    if(abs(x)<l) {
        if(y<=2) return cout<<y,0;
        int k = 2;
        for (int i = 3; i <= y; ++i)
        {
            if(i%2!=0) k+=2;
            else k++;
        }
        if(y%2==0) cout << k;
        else if(x>0 && y%2!=0) cout<<k;
        else cout<<k-1;
    }
    else cout << -1;
    return 0;
}