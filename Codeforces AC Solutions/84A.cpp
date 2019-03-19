/*
Problem Name: A - Toy Army
Problem ID: 84A
Problem URL: https://codeforces.com/contest/84/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46913298
Solution Time: 2018-12-11 21:19:17
Language: GNU C++17
Time consumed: 62 ms
Memory consumed: 200 KB
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

int v[30005];



signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;
    
    int n;
    cin>>n;
    cout<<n*3/2;
    return 0;
}