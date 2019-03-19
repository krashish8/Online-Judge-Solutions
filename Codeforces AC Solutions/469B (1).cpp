/*
Problem Name: B - Chat Online
Problem ID: 469B
Problem URL: https://codeforces.com/contest/469/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46703963
Solution Time: 2018-12-07 08:36:25
Language: GNU C++14
Time consumed: 15 ms
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
    

    int p,q,l,r;
    cin>>p>>q>>l>>r;
    int ck[2005]={0},d[q],c[q];
    for (int i = 0; i < p; ++i)
    {
        int a,b;
        cin>>a>>b;
        rep(j,a,b+1) {
            ck[j]=1;
        }
    }
    for (int i = 0; i < q; ++i)
    {
        cin>>c[i]>>d[i];
    }
    int cc=0;
    rep(i,l,r+1) {
        rep(j,0,q) {
            rep(k,c[j]+i,d[j]+1+i) {
                if(ck[k]) {
                    cc++;
                    goto a;
                }
            }
        }
        a:;
    }
    cout<<cc;
    return 0;
}