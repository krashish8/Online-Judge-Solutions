/*
Problem Name: A - The Fair Nut and Elevator
Problem ID: 1084A
Problem URL: https://codeforces.com/contest/1084/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46859845
Solution Time: 2018-12-10 19:45:18
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
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;
    
    int n;
    cin>>n;
    int a[n];
    int s,c=2000000005;
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; ++i)
    {
        s=0;
        rep(j,0,n) {
            s+=2*(abs(j-i)+abs(j-0)+abs(i-0))*a[j];
        }
        c=min(c,s);
    }
    cout<<c;
    return 0;
}