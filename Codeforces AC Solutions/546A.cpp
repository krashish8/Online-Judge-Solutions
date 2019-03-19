/*
Problem Name: A - Soldier and Bananas
Problem ID: 546A
Problem URL: https://codeforces.com/contest/546/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46854861
Solution Time: 2018-12-10 17:13:47
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
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;
    
    int k,n,w;
    cin>>k>>n>>w;
    int ans = w*(w+1)/2*k-n;
    if(ans<0) ans=0;
    cout<<ans;
    return 0;
}