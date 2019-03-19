/*
Problem Name: B - Chat Online
Problem ID: 469B
Problem URL: https://codeforces.com/contest/469/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46705402
Solution Time: 2018-12-07 09:44:58
Language: GNU C++14
Time consumed: 30 ms
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

bool testOverlap(int x1, int x2, int y1, int y2) {
  return (x1 >= y1 && x1 <= y2) ||
         (x2 >= y1 && x2 <= y2) ||
         (y1 >= x1 && y1 <= x2) ||
         (y2 >= x1 && y2 <= x2);
}

signed main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif  
    IOS;
    

    int p,q,l,r;
    cin>>p>>q>>l>>r;
    int a[p],b[p],d[q],c[q];
    for (int i = 0; i < p; ++i)
    {
        cin>>a[i]>>b[i];
    }
    for (int i = 0; i < q; ++i)
    {
        cin>>c[i]>>d[i];
    }
    int cc=0;
    rep(k,l,r+1) {
         rep(i,0,p){
             rep(j,0,q){
                if(testOverlap(a[i],b[i],c[j]+k,d[j]+k)) {cc++; goto a; }
            }
        }
        a:;
    }
    cout<<cc;
    return 0;
}