/*
Problem Name: A - Dragons
Problem ID: 230A
Problem URL: https://codeforces.com/contest/230/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46825379
Solution Time: 2018-12-09 20:58:54
Language: GNU C++17
Time consumed: 60 ms
Memory consumed: 100 KB
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
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif  
    IOS;
    
    int s,n;
    cin>>s>>n;
    vector<pii> v;
    for (int i = 0; i < n; ++i)
    {
        int x,y;
        cin>>x>>y;
        v.pb({x,y});
    }
    sort(v.begin(),v.end());
    for (auto it : v)
    {
        if(s>it.fi) s+=it.se;
        else return(cout<<"NO",0);
    }
    cout<<"YES";
    return 0;
}