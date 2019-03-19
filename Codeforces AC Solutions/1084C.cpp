/*
Problem Name: C - The Fair Nut and String
Problem ID: 1084C
Problem URL: https://codeforces.com/contest/1084/problem/C
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46868868
Solution Time: 2018-12-10 20:26:07
Language: GNU C++17
Time consumed: 31 ms
Memory consumed: 700 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define pb push_back
#define pii pair<int,int>
#define fi first
#define se second
#define rep(i,a,b) for (int i=a; i<b; ++i)
#define dbg(x) { cout<< #x << ": " << (x) << endl; }
#define dbg2(x,y) { cout<< #x << ": " << (x) << " , " << #y << ": " << (y) << endl; }
#define eps 0.0000001
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

const int MOD = 1000000007;
vector<int> v;

signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;
    
    string s;
    cin>>s;
    int c=0;
    for (int i = 0; i < s.length(); ++i)
    {
        if(s[i]==&#39;a&#39;) c++;
        else if(s[i]==&#39;b&#39; && c!=0){
            v.pb(c);
            c=0;
        }
    }
    if(c!=0) v.pb(c);
    int ans=1;
    for(auto it:v) {
        ans=((ans%MOD)*(it%MOD+1))%MOD;
    }
    cout<<ans-1;
    return 0;
}