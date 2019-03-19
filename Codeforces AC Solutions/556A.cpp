/*
Problem Name: A - Case of the Zeros and Ones
Problem ID: 556A
Problem URL: https://codeforces.com/contest/556/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46535231
Solution Time: 2018-12-03 11:37:09
Language: GNU C++14
Time consumed: 31 ms
Memory consumed: 500 KB
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
    
    
    int n;
    string s;
    cin>>n>>s;
    int c0=0,c1=0;
    for (int i = 0; i < n; ++i)
    {
        if(s[i]==&#39;0&#39;) c0++;
        else c1++;
    }
    cout<<abs(c0-c1);
    return 0;
}