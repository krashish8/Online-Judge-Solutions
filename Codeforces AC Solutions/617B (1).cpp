/*
Problem Name: B - Chocolate
Problem ID: 617B
Problem URL: https://codeforces.com/contest/617/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 47550096
Solution Time: 2018-12-27 15:33:35
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




signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n;
    cin >> n;
    int a[n];
    int prev=-1,cur=0;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        if(a[i]==1 && prev==-1) {prev=cur=i;}
    }
    int ans=1;
    if(prev==-1) return cout<<0,0;
    for (int i = 0; i < n; ++i)
    {
        if(a[i]==1) {
            cur=i;
            if(cur!=prev)
            ans*=cur-prev;
            prev=i;
        }
    }
    cout << ans;
    return 0;
}