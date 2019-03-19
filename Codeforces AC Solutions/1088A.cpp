/*
Problem Name: A - Ehab and another construction problem
Problem ID: 1088A
Problem URL: https://codeforces.com/contest/1088/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46589406
Solution Time: 2018-12-04 17:37:50
Language: GNU C++14
Time consumed: 31 ms
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
    
    int x;
    cin>>x;
    rep(i,1,x+1) {
        rep(j,1,x+1) {
            if(j%i==0 && j*i>x && (double)j/i<x)
                return(cout<<j<<" "<<i,0 );
        }
    }
    cout<<-1;
    return 0;
}