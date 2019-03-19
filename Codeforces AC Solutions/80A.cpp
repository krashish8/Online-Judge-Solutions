/*
Problem Name: A - Panoramix's Prediction
Problem ID: 80A
Problem URL: https://codeforces.com/contest/80/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46539040
Solution Time: 2018-12-03 13:54:50
Language: GNU C++14
Time consumed: 62 ms
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

bool ck(int n) {
    if(n==1) return 0;
    if(n==2) return 1;
    for (int i = 2; i <= sqrt(n); ++i)
    {
        if(n%i==0) return 0;
    }
    return 1;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif  
    IOS;
    
    int n,m;
    cin>>n>>m;
    if(!ck(n)) {
        return(cout<<"NO",0);
    }
    for (int i = n+1; i < m; ++i)
    {
        if(ck(i)) return(cout<<"NO",0);
    }
    if(!ck(m)) return(cout<<"NO",0);
    cout<<"YES";
    return 0;
}