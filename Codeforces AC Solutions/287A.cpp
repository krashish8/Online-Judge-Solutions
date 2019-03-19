/*
Problem Name: A - IQ Test
Problem ID: 287A
Problem URL: https://codeforces.com/contest/287/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46550709
Solution Time: 2018-12-03 20:39:39
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



signed main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif  
    IOS;
    
    char c[4][4];
    for (int i = 0; i < 4; ++i)
    {
        rep(j,0,4) {
            cin>>c[i][j];
        }   
    }
    rep(i,0,3) {
        rep(j,0,3) {
            int cn=0;
            if(c[i][j]==&#39;#&#39;) cn++;
            if(c[i+1][j]==&#39;#&#39;) cn++;
            if(c[i][j+1]==&#39;#&#39;) cn++;
            if(c[i+1][j+1]==&#39;#&#39;) cn++;
            if(cn==3 || cn==4 || cn==0 || cn==1)  return(cout<<"YES",0);
        }
    }
    cout<<"NO";
    return 0;
}