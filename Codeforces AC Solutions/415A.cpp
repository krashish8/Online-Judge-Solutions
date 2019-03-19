/*
Problem Name: A - Mashmokh and Lights
Problem ID: 415A
Problem URL: https://codeforces.com/contest/415/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46856933
Solution Time: 2018-12-10 18:26:25
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




signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;
    
    int n,m;
    cin>>n>>m;
    int b[n+1]={0};
    for (int i = 0; i < m; ++i)
    {
        int a;
        cin>>a;
        rep(j,a,n+1) {
            if(b[j]==0) b[j]=a;
        }
    }
    for (int i = 1; i < n+1; ++i)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}