/*
Problem Name: B - Physics Practical
Problem ID: 253B
Problem URL: https://codeforces.com/contest/253/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 47612335
Solution Time: 2018-12-28 11:47:12
Language: GNU C++17
Time consumed: 122 ms
Memory consumed: 200 KB
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
    #ifndef LOCAL
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int a;
        cin >> a;
        cnt[a]++;
    }
    int ans=inf;
    for(int i = 1; i <=5000; i++) {
        int c=0;
        for(int j = 1; j < i; j++) {
            c+=cnt[j];
        }
        for(int j = i*2+1; j <= 5000; j++) {
            c+=cnt[j];
        }
        ans=min(c,ans);
    }
    cout<<ans;
    
    return 0;
}