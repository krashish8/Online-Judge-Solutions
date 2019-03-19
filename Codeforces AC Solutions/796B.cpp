/*
Problem Name: B - Find The Bone
Problem ID: 796B
Problem URL: https://codeforces.com/contest/796/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46655159
Solution Time: 2018-12-05 18:55:09
Language: GNU C++14
Time consumed: 420 ms
Memory consumed: 15700 KB
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

vector<pii> v;

int ck[1000005];
int h[1000005];

signed main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif  
    IOS;
    
    int n,m,k;
    cin>>n>>m>>k;
    for (int i = 0; i < m; ++i)
    {
        int a;
        cin>>a;
        h[a]=1;
    }
    ck[1]=1;
    for (int i = 0; i < k; ++i)
    {
        int a1,a2;
        cin>>a1>>a2;
        if(ck[a1]) {
            if(h[a1]) return(cout<<a1,0);
            if(h[a2]) return(cout<<a2,0);
            ck[a1]=0;
            ck[a2]=1; 
        }
        else if(ck[a2]) {
            if(h[a2]) return(cout<<a2,0);
            if(h[a1]) return(cout<<a1,0);
            ck[a2]=0;
            ck[a1]=1;
        }
    }
    for (int i = 0; i < 1000005; ++i)
    {
        if(ck[i]) {cout<<i; break;}
    }
    return 0;
}