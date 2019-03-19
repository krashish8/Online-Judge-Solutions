/*
Problem Name: B - Coins
Problem ID: 47B
Problem URL: https://codeforces.com/contest/47/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 47174471
Solution Time: 2018-12-17 19:46:31
Language: GNU C++17
Time consumed: 62 ms
Memory consumed: 0 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define pb push_back
#define pii pair<int,int>
#define fi first
#define se second
#define rep(i,a,b) for (int i=a; i<b; ++i)
#define dbg(x) { cerr<<#x<<": "<<x<< endl; }
#define dbg2(x,y) { cerr<<#x<<": "<<x<<" , "<<#y<<": "<<y<<endl; }
#define dbg3(x,y,z) { cerr<<#x<<": "<<x<<" , "<<#y<<": "<<y<<" , "<<#z<<": "<<z<<endl; }
#define eps 0.0000001
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#ifndef LOCAL
#define endl &#39;\n&#39;
#endif


signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;
    
    string s = "ABC";
    string a[3];
    cin>>a[0]>>a[1]>>a[2];
    do {
        map<char,int> m;
        m[s[0]]=1;
        m[s[1]]=2;
        m[s[2]]=3;
        int flag=0;
        for (int i = 0; i < 3; ++i)
        {
            if(a[i][1]==&#39;>&#39;) {
                if(m[a[i][0]]<m[a[i][2]]) {flag=1; break;}
            }
            else {
                if(m[a[i][0]]>m[a[i][2]]) {flag=1; break;}
            }
        }
        if(flag==0) return cout<<s,0;
    }while(next_permutation(s.begin(),s.end()));
    cout<<"Impossible";
    return 0;
}