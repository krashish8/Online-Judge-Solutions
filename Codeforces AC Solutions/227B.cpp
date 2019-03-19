/*
Problem Name: B - Effective Approach
Problem ID: 227B
Problem URL: https://codeforces.com/contest/227/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46585805
Solution Time: 2018-12-04 16:13:04
Language: GNU C++14
Time consumed: 218 ms
Memory consumed: 4100 KB
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

map<int,int> mm;

signed main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif  
    IOS;
    
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        int a;
        cin>>a;
        mm[a]=i+1;
    }
    int m;
    cin>>m;
    int s1=0,s2=0;
    for (int i = 0; i < m; ++i)
    {
        int a;
        cin>>a;
        s1+=mm[a];
        s2+=n-mm[a]+1;
    }
    cout<<s1<<" "<<s2;
    return 0;
}