/*
Problem Name: B - Regular Bracket Sequence
Problem ID: 26B
Problem URL: https://codeforces.com/contest/26/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46769415
Solution Time: 2018-12-08 19:05:08
Language: GNU C++17
Time consumed: 62 ms
Memory consumed: 2300 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define mod 1000000007
#define pb push_back
#define pii pair<int,int>
#define fi first
#define se second
#define rep(i,a,b) for (int i=a; i<b; ++i)
#define dbg(x) { cout<< #x << ": " << (x) << endl; }
#define dbg2(x,y) { cout<< #x << ": " << (x) << " , " << #y << ": " << (y) << endl; }
#define eps 0.0000001
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

stack <char> st;

signed main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif  
    IOS;
    
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); ++i)
    {
        char c = s[i];
        if(s[i] == &#39;)&#39;)
        if(!st.empty() && st.top() == &#39;(&#39;)
            st.pop();
        else
            st.push(s[i]);
        else
        st.push(s[i]);
    }
    cout<<s.length()-st.size();
    return 0;
}