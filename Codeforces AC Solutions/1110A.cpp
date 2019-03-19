/*
Problem Name: A - Parity
Problem ID: 1110A
Problem URL: https://codeforces.com/contest/1110/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 49563455
Solution Time: 2019-02-07 16:37:56
Language: GNU C++17
Time consumed: 46 ms
Memory consumed: 1000 KB
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
const int N  = 5e5+5;
const int mx = 5e5;


signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int b, k;
    cin >> b >> k;
    int a[k];
    for (int i = 0; i < k; ++i)
    {
        cin >> a[i];
        a[i] = a[i]%2;
    }
    int s = 0;
    for (int i = 0; i < k-1; ++i)
    {
        s+=a[i]*b;
    }
    s+=a[k-1];
    if(s%2==0) cout << "even";
    else cout << "odd";
    return 0;
}