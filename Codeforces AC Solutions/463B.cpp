/*
Problem Name: B - Caisa and Pylons
Problem ID: 463B
Problem URL: https://codeforces.com/contest/463/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46579792
Solution Time: 2018-12-04 13:44:19
Language: GNU C++14
Time consumed: 46 ms
Memory consumed: 0 KB
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
    int mx=0;
    for (int i = 0; i < n; ++i)
    {
        int a;
        cin>>a;
        mx=max(a,mx);
    }
    cout<<mx;
    return 0;
}