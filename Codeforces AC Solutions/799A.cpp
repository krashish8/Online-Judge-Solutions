/*
Problem Name: A - Carrot Cakes
Problem ID: 799A
Problem URL: https://codeforces.com/contest/799/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46466834
Solution Time: 2018-12-02 07:03:18
Language: GNU C++14
Time consumed: 31 ms
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
//freopen("input.txt", "r", stdin);
    IOS;
    
    int n,t,k,d;
    cin>>n>>t>>k>>d;
    if(n-d/t*k > k) cout<<"YES";
    else cout<<"NO";
}