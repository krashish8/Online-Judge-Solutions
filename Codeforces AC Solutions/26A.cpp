/*
Problem Name: A - Almost Prime
Problem ID: 26A
Problem URL: https://codeforces.com/contest/26/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46769864
Solution Time: 2018-12-08 19:21:00
Language: GNU C++17
Time consumed: 92 ms
Memory consumed: 0 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define mod 1000000007
#define pb push_back
#define pii pair<int,int>
#define fi first
#define se second
#define rep(i,a,b) for (int i=a; i<b; ++i)
#define dbg(x) { cout<< #x << ": " << (x) << endl; }
#define dbg2(x,y) { cout<< #x << ": " << (x) << " , " << #y << ": " << (y) << endl; }
#define eps 0.0000001
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

bool isprime(int n) {
    if(n==1) return 0;
    for (int i = 2; i < n; ++i)
    {
        if(n%i==0) return 0;
    }
    return 1;
}

signed main(){
    #ifndef ONLINE_JUDGE
        //freopen("input.txt", "r", stdin);
    #endif  
    IOS;
    
    int n;
    cin>>n;
    int c=0;
    for (int i = 1; i <= n; ++i)
    {
        int cc=0;
        rep(j,2,i+1) {
            if(i%j==0 && isprime(j)) cc++;
            if(cc>2) break;
        }
        if(cc==2) c++;
    }
    cout<<c;
    return 0;
}