/*
Problem Name: A - Helpful Maths
Problem ID: 339A
Problem URL: https://codeforces.com/contest/339/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46506802
Solution Time: 2018-12-02 14:33:33
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
  //  freopen("input.txt", "r", stdin);
    IOS;
    
    vector<char> v;
    string s;
    cin>>s;
    for (int i = 0; i < s.length(); ++i)
    {
        if(s[i]>=&#39;1&#39; && s[i]<=&#39;3&#39;) v.push_back(s[i]);
    }
    sort(v.begin(),v.end());
    for(auto it = v.begin(); it!=v.end();it++) {
        if(it!=v.end()-1)
        cout<<*it<<"+";
        else cout<<*it;
    }
}   