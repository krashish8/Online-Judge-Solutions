/*
Problem Name: A - Petya and Strings
Problem ID: 112A
Problem URL: https://codeforces.com/contest/112/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46440821
Solution Time: 2018-12-01 14:50:15
Language: GNU C++14
Time consumed: 60 ms
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
    
    string s,t;
    cin>>s>>t;
    for (int i = 0; i < s.length(); ++i)
    {
    	if(s[i]>=&#39;A&#39; && s[i]<=&#39;Z&#39;) s[i]+=&#39;a&#39;-&#39;A&#39;;
    	if(t[i]>=&#39;A&#39; && t[i]<=&#39;Z&#39;) t[i]+=&#39;a&#39;-&#39;A&#39;;
    	if(s[i]<t[i]) return (cout<<-1,0);
    	else if(s[i]>t[i]) return (cout<<1,0);

    }
    return (cout<<0,0);
}