/*
Problem Name: B - Filya and Homework
Problem ID: 714B
Problem URL: https://codeforces.com/contest/714/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46709023
Solution Time: 2018-12-07 12:05:15
Language: GNU C++14
Time consumed: 62 ms
Memory consumed: 3300 KB
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

set<int> s;

signed main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif  
    IOS;
    
    int n;
    cin>>n;
    while(n--) {
        int a;
        cin>>a;
        s.insert(a);
    }    
    if(s.size()<3) {cout<<"YES";return 0;}
    if(s.size()>3) {cout<<"NO";return 0;}
    auto it = s.begin();
    int a=*it;
    it++; int b = *it;
    it++; int c = *it;
    if(b-a==c-b) cout<<"YES";
    else cout<<"NO";
    return 0;
}