/*
Problem Name: A - Coder
Problem ID: 384A
Problem URL: https://codeforces.com/contest/384/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46941087
Solution Time: 2018-12-12 19:39:24
Language: GNU C++17
Time consumed: 46 ms
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
        //freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n;
    cin>>n;
    if(n%2==0) cout<<n*n/2<<endl;
    else cout<<(n/2)*(n/2)+(n+1)*(n+1)/4<<endl;
    rep(i,1,n+1) {
        rep(j,1,n+1) {
            if(i%2==1) cout<<((j%2==0)?&#39;.&#39;:&#39;C&#39;);
            if(i%2==0) cout<<((j%2!=0)?&#39;.&#39;:&#39;C&#39;);

        }
        cout<<endl;
    }
    return 0;
}