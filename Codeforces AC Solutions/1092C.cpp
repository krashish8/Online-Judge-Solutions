/*
Problem Name: C - Prefixes and Suffixes
Problem ID: 1092C
Problem URL: https://codeforces.com/contest/1092/problem/C
Author: Ashish Kumar (ashishkr23438)
Solution ID: 47275845
Solution Time: 2018-12-19 22:16:34
Language: GNU C++17
Time consumed: 15 ms
Memory consumed: 200 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double
#define pb push_back
#define pii pair<int,int>
#define fi first
#define se second
#define inf INT_MAX
#define rep(i,a,b) for (int i=a; i<b; ++i)
#define dbg(x) { cerr<<#x<<": "<<x<< endl; }
#define dbg2(x,y) { cerr<<#x<<": "<<x<<" , "<<#y<<": "<<y<<endl; }
#define dbg3(x,y,z) { cerr<<#x<<": "<<x<<" , "<<#y<<": "<<y<<" , "<<#z<<": "<<z<<endl; }
#define eps 0.0000001
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#ifndef LOCAL
#define endl &#39;\n&#39;
#endif

bool comp(pair<string,int> a, pair<string,int> b) {
    return a.se<b.se;
}

bool comp1(pair<string,int> a,pair<string,int> b) {
    if(a.fi.length()==b.fi.length()) return a>b;
    else return a.fi.length()>b.fi.length();
}


bool rsm(string s,string t) {
    int i = s.length()-1;
    int j = t.length()-1;
    while(i>=0 && j>=0) {
        if(s[i]!=t[j]) return 0;
        i--;j--;
    }
    return 1;
}

bool sm(string s,string t) {
    for (int i = 0; i < min(s.length(),t.length()); ++i)
    {
        if(s[i]!=t[i]) return 0;
    }
    return 1;
}

vector<pair<string,int>> v;
vector<pair<string,int>> b;

signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    
    int n;
    cin>>n;
    for (int i = 0; i < 2*n-2; ++i)
    {
        string s;
        cin>>s;
        v.pb({s,i});
    }
    sort(v.begin(),v.end(),comp1);
    b=v;
    int flag=0;
    string ans=v[0].fi+v[1].fi[n-2];
    for (int i = 0; i < 2*n-2; i+=2)
    {
        if(sm(v[i].fi,ans) && rsm(v[i+1].fi,ans)) {
            v[i].fi="P";
            v[i+1].fi="S";
        }
        else if(rsm(v[i].fi,ans) && sm(v[i+1].fi,ans)) {
            v[i].fi="S";
            v[i+1].fi="P";
        }
        else {flag=1; break;}
    }
    if(flag) {
        ans=b[1].fi+b[0].fi[n-2];
        for (int i = 0; i < 2*n-2; i+=2)
        {
            if(sm(b[i].fi,ans) && rsm(b[i+1].fi,ans)) {
                b[i].fi="P";
                b[i+1].fi="S";
            }
            else if(rsm(b[i].fi,ans) && sm(b[i+1].fi,ans)) {
                b[i].fi="S";
                b[i+1].fi="P";
            }
        }
        sort(b.begin(),b.end(),comp);
        for(auto it:b) {
            cout<<it.fi;
        }
    }
    else {
        sort(v.begin(),v.end(),comp);
        for(auto it:v) {
            cout<<it.fi;
        }
    }
    return 0;
}