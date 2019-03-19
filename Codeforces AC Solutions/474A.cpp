/*
Problem Name: A - Keyboard
Problem ID: 474A
Problem URL: https://codeforces.com/contest/474/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46531852
Solution Time: 2018-12-03 09:12:27
Language: GNU C++14
Time consumed: 31 ms
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
    
    
    char c;
    cin>>c;
    string s;
    cin>>s;
    string t="qwertyuiopasdfghjkl;zxcvbnm,./";
    for (int i = 0; i < s.length(); ++i)
    {
        rep(j,0,t.length()) {
            if(s[i]==t[j] && c==&#39;R&#39;) {
                s[i]=t[j-1];
                break;
            }
            else if(s[i]==t[j] && c==&#39;L&#39;) {
                s[i]=t[j+1];
                break;
            }
        }
    }
    cout<<s;
    return 0;
}