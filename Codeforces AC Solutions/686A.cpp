/*
Problem Name: A - Free Ice Cream
Problem ID: 686A
Problem URL: https://codeforces.com/contest/686/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46505238
Solution Time: 2018-12-02 13:59:58
Language: GNU C++14
Time consumed: 30 ms
Memory consumed: 0 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007
#define inf 2e9+9
#define endl &#39;\n&#39;
#define rep(i,a,b) for(int i=a;i<b;++i)
#define dbg(x) { cout<< #x << ": " << (x) << endl; }
#define dbg2(x,y) { cout<< #x << ": " << (x) << " , " << #y << ": " << (y) << endl; }
#define eps 0.0000001
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

int main(){
   // freopen("input.txt", "r", stdin);
    IOS;
    
    ll n,s;
    cin>>n>>s;
    ll d=0;
    for (int i = 0; i < n; ++i)
    {
        char c;
        ll a;
        cin>>c>>a;
        if(c==&#39;+&#39;) s+=a;
        else {
            if(s<a) d++;
            else s-=a;
        }
    }
    cout<<s<<" "<<d;
}   