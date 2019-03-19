/*
Problem Name: A - String Task
Problem ID: 118A
Problem URL: https://codeforces.com/contest/118/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46534863
Solution Time: 2018-12-03 11:23:27
Language: GNU C++14
Time consumed: 60 ms
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
    
    
    string s;
    cin>>s;
    string t="";
    for (int i = 0; i < s.length(); ++i)
    {
        s[i]=tolower(s[i]);
        if(s[i]!=&#39;a&#39;&&s[i]!=&#39;e&#39;&&s[i]!=&#39;i&#39;&&s[i]!=&#39;o&#39;&&s[i]!=&#39;u&#39;&&s[i]!=&#39;y&#39;) {
            t+=s[i];
        }
    }
    
    for (int i = 0; i < t.length(); ++i)
    {
        cout<<"."<<t[i];
    }
    return 0;
}