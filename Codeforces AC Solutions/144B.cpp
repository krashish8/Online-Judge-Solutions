/*
Problem Name: B - Meeting
Problem ID: 144B
Problem URL: https://codeforces.com/contest/144/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 47545391
Solution Time: 2018-12-27 12:48:34
Language: GNU C++17
Time consumed: 342 ms
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
const int N  = 100005;




signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int n;
    cin >> n;
    if(x1>x2) swap(x1,x2);
    if(y1>y2) swap (y1,y2);
    int c = 0, d=0;
    int x[n],y[n],r[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> x[i] >> y[i] >> r[i];
    }
    int j = x1;
    rep(k,y1,y2+1) {
        d++;
        rep(i,0,n)
        if(r[i]*r[i] >= (j-x[i])*(j-x[i])+(k-y[i])*(k-y[i])) {
            dbg2(j,k);
            c++;
            goto a;
        }
        a:;
    }
    j = x2;
    rep(k,y1,y2+1) {
        d++;
        rep(i,0,n)
        if(r[i]*r[i] >= (j-x[i])*(j-x[i])+(k-y[i])*(k-y[i])) {
            dbg2(j,k);
            c++;
            goto b;
        }
        b:;
    }
    int k=y1;
    rep(j,x1+1,x2) {
        d++;
        rep(i,0,n)
        if(r[i]*r[i] >= (j-x[i])*(j-x[i])+(k-y[i])*(k-y[i])) {
            dbg2(j,k);
            c++;
            goto c;
        }
        c:;
    }
    k=y2;
    rep(j,x1+1,x2) {
        d++;
        rep(i,0,n)
        if(r[i]*r[i] >= (j-x[i])*(j-x[i])+(k-y[i])*(k-y[i])) {
            dbg2(j,k);
            c++;
            goto d;
        }
        d:;
    }
    cout <<  d-c;
    return 0;
}