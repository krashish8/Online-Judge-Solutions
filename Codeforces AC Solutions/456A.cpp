/*
Problem Name: A - Laptops
Problem ID: 456A
Problem URL: https://codeforces.com/contest/456/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46551172
Solution Time: 2018-12-03 20:56:36
Language: GNU C++14
Time consumed: 62 ms
Memory consumed: 1600 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007
#define inf 2e9+9
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define pi pair<int,int>
#define rep(i,a,b) for(int i=a;i<b;++i)
#define dbg(x) { cout<< #x << ": " << (x) << endl; }
#define dbg2(x,y) { cout<< #x << ": " << (x) << " , " << #y << ": " << (y) << endl; }
#define eps 0.0000001
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define endl &#39;\n&#39;

vector<pair<int,int>> v;

signed main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif  
    IOS;
    
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        int a,b;
        cin>>a>>b;
        v.pb({b,a});
    }
    sort(v.begin(),v.end());
    for (int i = 0; i < n-1; ++i)
    {
        if(v[i].se>v[i+1].se && v[i].fi<v[i+1].fi) return(cout<<"Happy Alex",0);
    }
    cout<<"Poor Alex";
    return 0;
}