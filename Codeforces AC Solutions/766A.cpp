/*
Problem Name: A - Mahmoud and Longest Uncommon Subsequence
Problem ID: 766A
Problem URL: https://codeforces.com/contest/766/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46516914
Solution Time: 2018-12-02 19:59:36
Language: GNU C++14
Time consumed: 31 ms
Memory consumed: 500 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007
#define inf 2e9+9
#define endl &#39;\n&#39;
#define pb push_back
#define mp make_pair
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
    if(s.length()!= t.length()) cout<<max(s.length(),t.length());
    else {
        if(s==t) cout<<-1;
        else cout<<s.length();
    }
}