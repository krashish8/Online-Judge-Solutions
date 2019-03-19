/*
Problem Name: A - Dice Rolling
Problem ID: 1093A
Problem URL: https://codeforces.com/contest/1093/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 47043655
Solution Time: 2018-12-15 17:42:12
Language: GNU C++17
Time consumed: 15 ms
Memory consumed: 0 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define pb push_back
#define pii pair<int,int>
#define fi first
#define se second
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
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;
    
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        if(n%7==0) cout<<n/7<<endl;
        else cout<<n/7+1<<endl;
    }
    return 0;
}