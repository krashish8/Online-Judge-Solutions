/*
Problem Name: A - Restoring Password
Problem ID: 94A
Problem URL: https://codeforces.com/contest/94/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 48722582
Solution Time: 2019-01-22 17:10:17
Language: GNU C++14
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


signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    string a[11];
    string b;
    cin >> b;
    for (int i = 0; i < 11; ++i)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 80; i+=10)
    {
        rep(j,0,11)
        if(b.substr(i,10)==a[j]) cout <<j; 
    }
    return 0;
}