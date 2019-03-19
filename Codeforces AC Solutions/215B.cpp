/*
Problem Name: B - Olympic Medal
Problem ID: 215B
Problem URL: https://codeforces.com/contest/215/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46707085
Solution Time: 2018-12-07 10:51:58
Language: GNU C++14
Time consumed: 60 ms
Memory consumed: 0 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define mod 1000000007
#define pb push_back
#define pii pair<int,int>
#define fi first
#define se second
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
    
    int a;
    cin>>a;
    int r1=0,p1=0,p2=500000005;
    while(a--) {
        int b;
        cin>>b;
        r1=max(r1,b);
    }
    cin>>a;
    while(a--) {
        int b;
        cin>>b;
        p1=max(p1,b);
    }
    cin>>a;
    while(a--) {
        int b;
        cin>>b;
        p2=min(p2,b);
    }
    int b;
    cin>>a>>b;
    cout<<fixed<<setprecision(12)<<sqrt((r1*r1)/((double)a/b*p2/p1+1));
    return 0;
}