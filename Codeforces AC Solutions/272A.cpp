/*
Problem Name: A - Dima and Friends
Problem ID: 272A
Problem URL: https://codeforces.com/contest/272/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 47352271
Solution Time: 2018-12-22 06:56:24
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
#define inf INT_MAX
#define rep(i,a,b) for (int i=a; i<b; ++i)
#define dbg(x) { cerr<<#x<<": "<<x<< endl; }
#define dbg2(x,y) { cerr<<#x<<": "<<x<<" , "<<#y<<": "<<y<<endl; }
#define dbg3(x,y,z) { cerr<<#x<<": "<<x<<" , "<<#y<<": "<<y<<" , "<<#z<<": "<<z<<endl; }
#define eps 0.0000001
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#ifndef LOCAL
#define endl &#39;\n&#39;
#endif



signed main(){
    #ifdef LOCAL
        //freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n;
    cin>>n;
    int s=0;
    for (int i = 0; i < n; ++i)
    {
        int m;
        cin>>m;
        s+=m;
    }
    int c=0;
    rep(i,1,6) {
        if((i+s)%(n+1)!=1)
            c++;
    }
    cout<<c;
    return 0;
}
