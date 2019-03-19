/*
Problem Name: A - Triangular numbers
Problem ID: 47A
Problem URL: https://codeforces.com/contest/47/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46856751
Solution Time: 2018-12-10 18:20:19
Language: GNU C++17
Time consumed: 60 ms
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
    int s=0;
    if(n==1) return(cout<<"YES",0);
    rep(i,1,n) {
        s+=i;
        if(s==n) {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}