/*
Problem Name: A - Football
Problem ID: 43A
Problem URL: https://codeforces.com/contest/43/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46535976
Solution Time: 2018-12-03 12:01:18
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


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif  
    IOS;
    
    
    int n;
    string t;
    map<string,int> m;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        string a;
        cin>>a;
        m[a]++;
    }
    int c=0;
    for(auto it:m) {
        if(c<it.second) {
            c=it.se;
            t=it.fi;
        }
    }
    cout<<t;
    return 0;
}