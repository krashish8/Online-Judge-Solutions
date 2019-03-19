/*
Problem Name: A - Buy a Shovel
Problem ID: 732A
Problem URL: https://codeforces.com/contest/732/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46447474
Solution Time: 2018-12-01 17:18:24
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
   // freopen("input.txt", "r", stdin);
    IOS;
    
    int k,r;
    cin>>k>>r;
    int i;
    for (i = 1; i < 10; ++i)
    {
    	if((i*k)%10==r || (i*k)%10==0) break;
    }
    cout<<i;
}