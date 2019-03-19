/*
Problem Name: A - Snow Footprints
Problem ID: 298A
Problem URL: https://codeforces.com/contest/298/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46551717
Solution Time: 2018-12-03 21:14:47
Language: GNU C++14
Time consumed: 30 ms
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

vector<pair<int,int>> v;

signed main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif  
    IOS;
    
    int n;
    cin>>n;
    string s;
    cin>>s;
    int f1=0,f2=0;
    for (int i = 0; i < n; ++i)
    {
        if(s[i]==&#39;R&#39;) f1=1;
        if(s[i]==&#39;L&#39;) f2=1;
    }
    if(f1==0) {
        for(int i=s.length()-1;i>=0;i--) {
            if(s[i]==&#39;L&#39;) {cout<<i+1<<" "; break;}
        }
        for (int i = 0; i < s.length(); ++i)
        {
            if(s[i]==&#39;L&#39;) {cout<<i; break;}
        }
        return 0;
    }
    if(f2==0) {
        for (int i = 0; i < s.length(); ++i)
        {
            if(s[i]==&#39;R&#39;) {cout<<i+1<<" "; break;}
        }
        for(int i=s.length()-1;i>=0;i--) {
            if(s[i]==&#39;R&#39;) {cout<<i+2; break;}
        }
        return 0;
        
    }
    for (int i = 0; i < s.length(); ++i)
    {
        if(s[i]==&#39;R&#39;) {cout<<i+1<<" ";
        break;}
    }
    for (int i = 0; i < s.length(); ++i)
    {
        if(s[i]==&#39;L&#39;) {cout<<i+1;
        break;}
    }
    return 0;
}