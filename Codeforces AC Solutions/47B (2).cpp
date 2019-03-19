/*
Problem Name: B - Coins
Problem ID: 47B
Problem URL: https://codeforces.com/contest/47/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46583253
Solution Time: 2018-12-04 15:06:08
Language: GNU C++14
Time consumed: 62 ms
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

map<char,int> m;

signed main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif  
    IOS;
    
    string s[3];
    cin>>s[0]>>s[1]>>s[2];
    rep(i,0,3) {
        if(s[i][1]==&#39;>&#39;) {
            m[s[i][0]]++;
            m[s[i][2]]--;
        }
        else {
            m[s[i][0]]--;
            m[s[i][2]]++;
        }
    }
    string a,b,c;
    for(auto it:m) {
        if(it.se==-2) if(a=="") a=it.fi;else return(cout<<"Impossible",0);
        else if(it.se==0) if(b=="")b=it.fi;else return(cout<<"Impossible",0);
        else if(it.se==2) if(c=="")c=it.fi;else return(cout<<"Impossible",0);
        else return(cout<<"Impossible",0);
    }
    cout<<a<<b<<c;
    return 0;
}