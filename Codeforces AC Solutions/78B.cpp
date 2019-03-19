/*
Problem Name: B - Easter Eggs
Problem ID: 78B
Problem URL: https://codeforces.com/contest/78/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46586190
Solution Time: 2018-12-04 16:23:20
Language: GNU C++14
Time consumed: 62 ms
Memory consumed: 0 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define mod 1000000007
#define pb push_back
#define fi first
#define se second
#define rep(i,a,b) for(int i=a;i<b;++i)
#define dbg(x) { cout<< #x << ": " << (x) << endl; }
#define dbg2(x,y) { cout<< #x << ": " << (x) << " , " << #y << ": " << (y) << endl; }
#define eps 0.0000001
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define endl &#39;\n&#39;



signed main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif  
    IOS;
    
    int n;
    cin>>n;
    while(n/7!=0) {
        cout<<"ROYGBIV";
        n-=7;
    }
    while(n/4!=0) {
        cout<<"GBIV";
        n-=4;
    }
    string s="GBIV";
    cout<<s.substr(0,n);
    return 0;
}