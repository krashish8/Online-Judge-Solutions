/*
Problem Name: A - Counterexample
Problem ID: 483A
Problem URL: https://codeforces.com/contest/483/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46539706
Solution Time: 2018-12-03 14:18:56
Language: GNU C++14
Time consumed: 31 ms
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
#define rep(i,a,b) for(ll i=a;i<b;++i)
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
    
    ll l,r;
    cin>>l>>r;
    rep(i,l,r-1) {
        rep(j,i+1,r) {
            rep(k,j+1,r+1) {
                if(__gcd(i,j) == 1 && __gcd(j,k)==1 && __gcd(i,k) !=1)
                    return(cout<<i<<" "<<j<<" "<<k,0);
            }
        }
    }
    cout<<-1;
    return 0;
}