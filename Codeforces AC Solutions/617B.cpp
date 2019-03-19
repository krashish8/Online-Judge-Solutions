/*
Problem Name: B - Chocolate
Problem ID: 617B
Problem URL: https://codeforces.com/contest/617/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 47550218
Solution Time: 2018-12-27 15:37:43
Language: GNU C++17
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


vector<int> v;

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
        if(a==1) v.pb(i);
    }
    if(v.size()==0) cout<<0;
    else {
        int ans=1;
        for (int i = 0; i < v.size()-1; ++i)
        {
            ans*=v[i+1]-v[i];
        }
        cout<<ans;
    }
    
    return 0;
}