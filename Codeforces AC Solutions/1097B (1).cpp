/*
Problem Name: B - Petr and a Combination Lock
Problem ID: 1097B
Problem URL: https://codeforces.com/contest/1097/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 47932820
Solution Time: 2019-01-04 19:18:23
Language: GNU C++17
Time consumed: 30 ms
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

    for (int i = 0; i < 1<<n; ++i)
    {
        int s = 0;
        for (int j = 0; j < n; ++j)
        {
            if(i & (1<<(j))) s+=a[j];
            else s-=a[j];
        }
        if(s%360==0)
            return cout << "YES",0;
        
    }
    cout << "NO";
    return 0;
}