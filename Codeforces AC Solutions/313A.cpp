/*
Problem Name: A - Ilya and Bank Account
Problem ID: 313A
Problem URL: https://codeforces.com/contest/313/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46822681
Solution Time: 2018-12-09 19:18:08
Language: GNU C++17
Time consumed: 62 ms
Memory consumed: 0 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define pb push_back
#define pii pair<int,int>
#define fi first
#define se second
#define rep(i,a,b) for (int i=a; i<b; ++i)
#define dbg(x) { cout<< #x << ": " << (x) << endl; }
#define dbg2(x,y) { cout<< #x << ": " << (x) << " , " << #y << ": " << (y) << endl; }
#define eps 0.0000001
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)



signed main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif  
    IOS;
    
    int n;
    cin>>n;
    if(n>=0) cout<<n;
    else cout<<max(n/10,n/100*10+n%10);
    return 0;
}