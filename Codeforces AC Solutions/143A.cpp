/*
Problem Name: A - Help Vasilisa the Wise 2
Problem ID: 143A
Problem URL: https://codeforces.com/contest/143/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46546530
Solution Time: 2018-12-03 18:07:56
Language: GNU C++14
Time consumed: 62 ms
Memory consumed: 0 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define int long long int
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
    
    int a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    rep(i,1,a) {
        rep(j,1,b) {
            int k=a-i,l=b-j;
            if(i+j==c && k+l==d && i+l==e && k+j==f)
                if(i<10 && j<10 && k<10 && l<10)
                    if(i!=j && i!=k && i!=l && j!=k && j!=l && k!=l)
                return(cout<<i<<" "<<k<<"\n"<<j<<" "<<l,0);
        }
    }
    cout<<-1;
    return 0;
}