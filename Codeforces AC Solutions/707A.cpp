/*
Problem Name: A - Brain's Photos
Problem ID: 707A
Problem URL: https://codeforces.com/contest/707/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46536155
Solution Time: 2018-12-03 12:08:18
Language: GNU C++14
Time consumed: 30 ms
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


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif  
    IOS;
    
    int n,m;
    cin>>n>>m;
    rep(i,0,n)
    {
        rep(j,0,m) {
            char c;
            cin>>c;
            if(c!=&#39;B&#39; && c!= &#39;W&#39; && c!=&#39;G&#39;) return(cout<<"#Color",0);
        }
    }
    cout<<"#Black&White";
    return 0;
}