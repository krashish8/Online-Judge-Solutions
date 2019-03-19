/*
Problem Name: A - Bus to Udayland
Problem ID: 711A
Problem URL: https://codeforces.com/contest/711/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46855312
Solution Time: 2018-12-10 17:29:43
Language: GNU C++17
Time consumed: 31 ms
Memory consumed: 0 KB
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




signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;
    
    int n;
    cin>>n;
    char c[n][5];
    rep(i,0,n) {
        rep(j,0,5)
            cin>>c[i][j];
    }
    bool ck=0;
    int cnt=0;
    int ind,ind2;
    rep(i,0,n) {
        rep(j,0,5) {
            if(j==2 || j==0) cnt=0;
            if(j<=1 && c[i][j]==&#39;O&#39;) cnt++;
            if(j<=4 && j>=3 && c[i][j]==&#39;O&#39;) cnt++;
            if(cnt==2) {
                ck=1;
                ind=i;
                ind2=j;
                goto a;
            }
        }
    }a:;

    if(ck) {
        cout<<"YES\n";
        rep(i,0,n) {
            rep(j,0,5) {
                if(i==ind && (j==ind2 || j==ind2-1))
                    cout<<"+";
                else
                    cout<<c[i][j];
            }
            cout<<endl;
        }
    }
    else cout<<"NO";
    return 0;
}