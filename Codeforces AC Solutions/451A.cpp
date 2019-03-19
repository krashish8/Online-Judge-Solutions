/*
Problem Name: A - Game With Sticks
Problem ID: 451A
Problem URL: https://codeforces.com/contest/451/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46820737
Solution Time: 2018-12-09 18:07:33
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
    
    int a,b;
    cin>>a>>b;
    if(min(a,b)%2==0) cout<<"Malvika";
    else cout<<"Akshat";
    return 0;
}