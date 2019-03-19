/*
Problem Name: B - Taxi
Problem ID: 158B
Problem URL: https://codeforces.com/contest/158/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 48097774
Solution Time: 2019-01-08 21:04:24
Language: GNU C++17
Time consumed: 92 ms
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
const int MOD = 1e9+7;
const int N  = 150005;

int c[5];

signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif
    IOS;

    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int a;
        cin >> a;
        c[a]++;
    }
    int ans = 0;
    ans+=c[4];
    if(c[3]>=c[1]) 
    {
        ans+=c[3];
        ans+=(c[2]+1)/2;
    }
    else {
        ans+=c[3];
        c[1]-=c[3];
        ans+=c[2]/2;
        if(c[2]%2!=0) {ans++; c[1]-=2;}
        ans+=(c[1]+3)/4;
    }
    cout << ans;
    return 0;
}