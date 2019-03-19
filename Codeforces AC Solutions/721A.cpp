/*
Problem Name: A - One-dimensional Japanese Crossword
Problem ID: 721A
Problem URL: https://codeforces.com/contest/721/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46854716
Solution Time: 2018-12-10 17:09:23
Language: GNU C++17
Time consumed: 31 ms
Memory consumed: 0 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define pb push_back
#define pii pair<int,int>
#define fi first
#define se second
#define rep(i,a,b) for (int i=a; i<b; ++i)
#define dbg(x) { cout<< #x << ": " << (x) << endl; }
#define dbg2(x,y) { cout<< #x << ": " << (x) << " , " << #y << ": " << (y) << endl; }
#define eps 0.0000001
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)




signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;
    
    int n;
    cin>>n;
    string s;
    cin>>s;
    int c=0;
    vector<int> v;
    for (int i = 0; i < s.length(); ++i)
    {
        if(s[i]==&#39;B&#39;) c++;
        else if(c!=0) v.pb(c),c=0;
    }
    if(c!=0) v.pb(c);
    cout<<v.size()<<endl;
    for(auto it:v) {
        cout<<it << " ";
    }
    return 0;
}