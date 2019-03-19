/*
Problem Name: A - Valera and X
Problem ID: 404A
Problem URL: https://codeforces.com/contest/404/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46537681
Solution Time: 2018-12-03 13:00:34
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
#define rep(i,a,b) for(int i=a;i<b;++i)
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
    
    int n;
    cin>>n;
    char c1,c2;
    rep(i,0,n) {
        rep(j,0,n) {
            char a;
            cin>>a;
            if(i==0 && j==0) c1=a;
            else if(i==0 && j==1) c2=a;
            else {
                if(j==i || j==n-i-1) {
                    if(c1!=a) return(cout<<"NO",0);
                }
                else {
                    if(c2!=a) return(cout<<"NO",0);
                }
            }
            if(c1==c2) return(cout<<"NO",0);
        }
    }
    cout<<"YES";
    return 0;
}