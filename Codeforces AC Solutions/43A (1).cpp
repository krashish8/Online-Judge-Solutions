/*
Problem Name: A - Football
Problem ID: 43A
Problem URL: https://codeforces.com/contest/43/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46535653
Solution Time: 2018-12-03 11:50:34
Language: GNU C++14
Time consumed: 92 ms
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
    
    
    int n;
    string s,t;
    int c1=0,c2=0;
    cin>>n;
    cin>>s;
    c1++;
    if(n==1) {
        cout<<s;
        return 0;
    }
    else {
        for (int i = 0; i < n-1; ++i)
        {
            string tt;
            cin>>tt;
            if(s!=tt) {t=tt; c2++;}
            else c1++;
        }
    }
    if(c1>c2) cout<<s;
    else cout<<t;
    return 0;
}