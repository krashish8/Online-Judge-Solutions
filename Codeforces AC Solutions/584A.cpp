/*
Problem Name: A - Olesya and Rodion
Problem ID: 584A
Problem URL: https://codeforces.com/contest/584/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46534630
Solution Time: 2018-12-03 11:14:20
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
    
    
    int n,t;
    cin>>n>>t;
    if(t==5)
    if(t==2 || t==3) t=6;
    if(t==4) t=8;
    if(t==10) {
        if(n==1) return(cout<<-1,0);
        for (int i = 0; i < n-1; ++i)
        {
            cout<<"1";
        }
        return(cout<<0,0);
    }
    for (int i = 0; i < n; ++i)
    {
        cout<<t;
    }
    return 0;
}