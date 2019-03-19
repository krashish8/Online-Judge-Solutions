/*
Problem Name: A - Soroban
Problem ID: 363A
Problem URL: https://codeforces.com/contest/363/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46978072
Solution Time: 2018-12-13 20:51:13
Language: GNU C++17
Time consumed: 30 ms
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
#ifndef LOCAL
#define endl &#39;\n&#39;
#endif

void print(int n) {
    if(n>=5) {cout<<"-O|"; n-=5;}
    else cout<<"O-|";
    for(int i=0;i<n;i++) {
        cout<<"O";
    }
    cout<<"-";
    for(int i=0;i<4-n;i++) {
        cout<<"O";
    }
    cout<<endl;
}

signed main(){
    #ifdef LOCAL
        //freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n;
    cin>>n;
    if(n==0) cout<<"O-|-OOOO";
    while(n!=0) {
        int d=n%10;
        n/=10;
        print(d);
    }
    return 0;
}