/*
Problem Name: A - PolandBall and Hypothesis
Problem ID: 755A
Problem URL: https://codeforces.com/contest/755/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46921413
Solution Time: 2018-12-12 08:15:07
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

bool prime (int n) {
    if(n==1) return 0;
    for (int i = 2; i < n; ++i)
    {
        if(n%i==0) return 0;
    }
    return 1;
}

signed main(){
    #ifdef LOCAL
        //freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;
    
    int n;
    cin>>n;
    if(n==1) cout<<3;
    else if(n%2==1) cout<<1;
    else {
        for(int i=1;;i++) {
            if(!prime(n*i+1))
                return cout<<i,0;
        }
    }
    return 0;
}