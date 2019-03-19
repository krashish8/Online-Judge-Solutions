/*
Problem Name: A - Little Pony and Crystal Mine
Problem ID: 454A
Problem URL: https://codeforces.com/contest/454/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46854490
Solution Time: 2018-12-10 17:00:56
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




signed main(){
    #ifdef LOCAL
        //freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;
    
    int n;
    cin>>n;
    for(int i=1;i<=n/2+1;i++) {
        for(int j=(n-i*2+1)/2;j>=1;j--) cout<<"*";
        for(int j=i*2-1;j>=1;j--) cout<<"D";
        for(int j=(n-i*2+1)/2;j>=1;j--) cout<<"*";
        cout<<endl;
    }
    for(int i=n/2;i>=1;i--) {
        for(int j=(n-i*2+1)/2;j>=1;j--) cout<<"*";
        for(int j=i*2-1;j>=1;j--) cout<<"D";
        for(int j=(n-i*2+1)/2;j>=1;j--) cout<<"*";
        cout<<endl;
    }
    return 0;
}