/*
Problem Name: B - Decoding
Problem ID: 746B
Problem URL: https://codeforces.com/contest/746/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46569336
Solution Time: 2018-12-04 07:08:29
Language: GNU C++14
Time consumed: 31 ms
Memory consumed: 200 KB
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
    
    int n;
    cin>>n;
    string s,t;
    cin>>s;
    for (int i = 0; i < s.length(); ++i)
    {
        if(n%2!=0) {
            t=t+s[i];
            n--;
        }
        else {
            t=s[i]+t;
            n--;
        }
    }
    cout<<t;
    return 0;
}