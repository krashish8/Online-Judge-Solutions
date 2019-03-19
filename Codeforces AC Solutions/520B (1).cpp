/*
Problem Name: B - Two Buttons
Problem ID: 520B
Problem URL: https://codeforces.com/contest/520/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 47612806
Solution Time: 2018-12-28 12:00:01
Language: GNU C++17
Time consumed: 31 ms
Memory consumed: 100 KB
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

int cnt[5005];

signed main(){
    #ifdef LOCAL
        ///freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n,m; 
    cin >> n >> m;
    if(n>=m)return cout<<n-m,0;
    int c=0;
    while(n<m) {
        if(m%2==1)
            m++;
        else m/=2;
        c++;
    }
    c+=n-m;
    cout<<c;
    
    return 0;
}