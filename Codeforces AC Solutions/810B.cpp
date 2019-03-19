/*
Problem Name: B - Summer sell-off
Problem ID: 810B
Problem URL: https://codeforces.com/contest/810/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46646718
Solution Time: 2018-12-05 15:13:56
Language: GNU C++14
Time consumed: 109 ms
Memory consumed: 3100 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define mod 1000000007
#define pb push_back
#define fi first
#define se second
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
    


    int n,f;
    cin>>n>>f;
    for (int i = 0; i < n; ++i)
    {
        int a,b;
        cin>>a>>b;
        v.pb({min(a*2,b)-min(a,b),min(a,b)});
    }
    sort(v.begin(),v.end(),greater<pair<int,int>>());
    int s=0,c=0;
    for(auto it:v) {
        if(c<f)
        {   c++;
            s+=it.fi+it.se;
        }
        else {
            s+=it.se;
        }
    }

    cout<<s;
    return 0;
}