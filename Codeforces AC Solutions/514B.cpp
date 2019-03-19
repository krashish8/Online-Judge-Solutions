/*
Problem Name: B - Han Solo and Lazer Gun
Problem ID: 514B
Problem URL: https://codeforces.com/contest/514/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 47606961
Solution Time: 2018-12-28 08:52:07
Language: GNU C++17
Time consumed: 31 ms
Memory consumed: 300 KB
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
const int N  = 100005;


set<pair<double,double>> s;

signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n, x0, y0;
    cin >> n >> x0 >> y0;
    double x[n],y[n],a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> x[i] >> y[i];
        a[i]=i;
    }
    for (int i = 0; i < n; ++i)
    {
        double m;
        if(x[i]!=x0)
        {
            m = (y[i]-y0)/(x[i]-x0);
            s.insert({m,y0-m*x0});
        }
        else {
            s.insert({-inf,-inf});
        }
        
    }
    cout<< s.size();
    return 0;
}