/*
Problem Name: A - Anton and Letters
Problem ID: 443A
Problem URL: https://codeforces.com/contest/443/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46467150
Solution Time: 2018-12-02 07:21:00
Language: GNU C++14
Time consumed: 31 ms
Memory consumed: 100 KB
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
    
    string s;
    cin>>s;
    set<char> st;
    if(s[1]!=&#39;}&#39;)
        st.insert(s[1]);
    while(s[s.length()-1]!=&#39;}&#39; ) {
        cin>>s;
        st.insert(s[0]);
    }
    cout<<st.size();
}