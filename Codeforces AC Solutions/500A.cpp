/*
Problem Name: A - New Year Transportation
Problem ID: 500A
Problem URL: https://codeforces.com/contest/500/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46913072
Solution Time: 2018-12-11 21:09:45
Language: GNU C++17
Time consumed: 31 ms
Memory consumed: 300 KB
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

int v[30005];



signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;
    
    int n,t;
    cin>>n>>t;
    for (int i = 0; i < n-1; ++i)
    {
        int a;
        cin>>a;
        v[i+1]=(i+1+a);
    }
    int s=1;
    bool vis[n+1]={0};
    while(true) {
        if(v[s]!=t && !vis[s]) {
            vis[s]=1;
            s=v[s];
        }
        else if(v[s]==t && !vis[s]){
            cout<<"YES";
            return 0;
        }
        else break;
    }
    cout<<"NO";
    return 0;
}