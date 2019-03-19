/*
Problem Name: A - Bear and Raspberry
Problem ID: 385A
Problem URL: https://codeforces.com/contest/385/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46827433
Solution Time: 2018-12-09 22:24:52
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
    
    int n,k;
    cin>>n>>k;
    int a[n];
    int mx=0;
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
        if(i!=0)
        mx=max(mx,a[i-1]-a[i]);
    }
    if(mx-k<0) mx=k;
    cout<<mx-k;
    return 0;
}