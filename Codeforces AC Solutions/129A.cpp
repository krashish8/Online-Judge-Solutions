/*
Problem Name: A - Cookies
Problem ID: 129A
Problem URL: https://codeforces.com/contest/129/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46855458
Solution Time: 2018-12-10 17:34:21
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
    int m=n;
    int c=0,s=0;
    while(m--) {
        int a;
        cin>>a;
        s+=a;
        if(a%2==0) c++;
    }
    if(s%2==0)
    cout<<c;
    else cout<<n-c;
    return 0;
}