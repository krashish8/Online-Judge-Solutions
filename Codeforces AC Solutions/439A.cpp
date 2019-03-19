/*
Problem Name: A - Devu, the Singer and Churu, the Joker
Problem ID: 439A
Problem URL: https://codeforces.com/contest/439/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46825512
Solution Time: 2018-12-09 21:04:14
Language: GNU C++17
Time consumed: 31 ms
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
    
    int n,d;
    cin>>n>>d;
    for (int i = 0; i < n; ++i)
    {
        int t;
        cin>>t;
        d-=t;
    }
    d-=(n-1)*10;
    if(d<0) cout<<-1;
    else cout<<(n-1)*2+d/5;
    return 0;
}