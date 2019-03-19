/*
Problem Name: B - Keyboard
Problem ID: 88B
Problem URL: https://codeforces.com/contest/88/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46656492
Solution Time: 2018-12-05 19:36:26
Language: GNU C++14
Time consumed: 46 ms
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



char c[35][35];
double ck[26];

int d[35][35];
int ck1[26];

signed main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif  
    IOS;
    
    fill(ck,ck+26,2000000009);
    int n,m,k;
    cin>>n>>m>>k;
    
    rep(i,0,n) {
        rep(j,0,m) {
            cin>>c[i][j];
        }
    }
    int flag=0;
    rep(i,0,n) {
        rep(j,0,m) {
            if(c[i][j]==&#39;S&#39;) {flag=1; continue;}
            double d=2000000005;
            ck1[c[i][j]-&#39;a&#39;]=1;
            rep(k,0,n) {
                rep(l,0,m) {
                    if(c[k][l]==&#39;S&#39;) {
                        d=min(d,sqrt((k-i)*(k-i)+(l-j)*(l-j)));
                    }
                }
            }
            ck[c[i][j]-&#39;a&#39;]=min(ck[c[i][j]-&#39;a&#39;],d);
        }
    }
    for (int i = 0; i < 26; ++i)
    {
        if(ck[i]>k) ck[i]=1;
        else ck[i]=0;
    }
    int q;
    cin>>q;
    char qq;
    int count=0;
    while(cin>>qq) {
        if(flag==0 && qq>=&#39;A&#39; && qq<=&#39;Z&#39;)
            return(cout<<-1,0);
        if(!ck1[tolower(qq)-&#39;a&#39;])
             return(cout<<-1,0);
        if(qq>=&#39;A&#39; && qq<=&#39;Z&#39;)
            count+=ck[qq-&#39;A&#39;];
    }
    cout<<count;
    return 0;
}