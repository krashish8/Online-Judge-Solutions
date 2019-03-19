/*
Problem Name: A - Snowball
Problem ID: 1099A
Problem URL: https://codeforces.com/contest/1099/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 47975109
Solution Time: 2019-01-05 19:41:12
Language: GNU C++17
Time consumed: 31 ms
Memory consumed: 200 KB
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
const int N  = 150005;

signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int w,h,u1,d1,u2,d2;
    cin >> w >> h >> u1 >> d1 >> u2 >> d2;
    for(int i = h;i>=0;i--) {
        dbg(i);
        w+=i;
        if(i==d1) w-=u1;
        if(i==d2) w-=u2;
        if(w<0) w=0;
        dbg2(i,w);
    }
    cout << w;
    return 0;
}