/*
Problem Name: A - Triangle
Problem ID: 18A
Problem URL: https://codeforces.com/contest/18/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 51080029
Solution Time: 2019-03-09 13:54:47
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

bool ck(int x1,int y1, int x2, int y2, int x3, int y3) {
    int d3 = (x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
    int d2 = (x3-x1)*(x3-x1)+(y3-y1)*(y3-y1);
    int d1 = (x2-x3)*(x2-x3)+(y2-y3)*(y2-y3);
    int mx = max({d1,d2,d3});
    if((y3-y2)*(x2-x1)==(x3-x2)*(y2-y1)) return 0;
    if(d1+d2+d3-mx==mx) return 1;
    else return 0;
}

signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    if(ck(x1,y1,x2,y2,x3,y3)) cout << "RIGHT";
    else if(ck(x1+1,y1,x2,y2,x3,y3)) cout << "ALMOST";
    else if(ck(x1-1,y1,x2,y2,x3,y3)) cout << "ALMOST";
    else if(ck(x1,y1+1,x2,y2,x3,y3)) cout << "ALMOST";
    else if(ck(x1,y1-1,x2,y2,x3,y3)) cout << "ALMOST";
    else if(ck(x1,y1,x2+1,y2,x3,y3)) cout << "ALMOST";
    else if(ck(x1,y1,x2-1,y2,x3,y3)) cout << "ALMOST";
    else if(ck(x1,y1,x2,y2+1,x3,y3)) cout << "ALMOST";
    else if(ck(x1,y1,x2,y2-1,x3,y3)) cout << "ALMOST";
    else if(ck(x1,y1,x2,y2,x3+1,y3)) cout << "ALMOST";
    else if(ck(x1,y1,x2,y2,x3-1,y3)) cout << "ALMOST";
    else if(ck(x1,y1,x2,y2,x3,y3+1)) cout << "ALMOST";
    else if(ck(x1,y1,x2,y2,x3,y3-1)) cout << "ALMOST";
    else cout << "NEITHER";
    return 0;
}