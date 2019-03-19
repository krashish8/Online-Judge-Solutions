/*
Problem Name: A - Salem and Sticks
Problem ID: 1105A
Problem URL: https://codeforces.com/contest/1105/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 48611512
Solution Time: 2019-01-20 15:16:10
Language: GNU C++14
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

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    int ans = 1, mn = inf;
    for (int t = 1; t <=100;t++){
        int s=0;
        for (int i = 0; i < n; ++i)
        {
            if(a[i]>t+1) s+=a[i]-t-1;
            else if(a[i]<t-1) s+=t-a[i]-1;
        }
        if(s<mn) {
            mn = s;
            ans = t;
            //dbg2(t,mn);
        }
    }
    cout << ans << " " << mn;
    return 0;
}