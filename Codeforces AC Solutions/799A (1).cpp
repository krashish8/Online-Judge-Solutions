/*
Problem Name: A - Carrot Cakes
Problem ID: 799A
Problem URL: https://codeforces.com/contest/799/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46454659
Solution Time: 2018-12-01 20:46:10
Language: GNU C++14
Time consumed: 31 ms
Memory consumed: 0 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007
#define inf 2e9+9
#define endl &#39;\n&#39;
#define rep(i,a,b) for(int i=a;i<b;++i)
#define dbg(x) { cout<< #x << ": " << (x) << endl; }
#define dbg2(x,y) { cout<< #x << ": " << (x) << " , " << #y << ": " << (y) << endl; }
#define eps 0.0000001
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)



int main(){
    //freopen("input.txt", "r", stdin);
    IOS;
    
    int n,t,k,d;
    cin>>n>>t>>k>>d;
    int t1,t2;
    t1=ceil((double)n/k)*t;
    if(d==t) {
        if(n>k)
        t2=t+t*ceil((double(n-k)/(2*k)));
        else return(cout<<"NO",0);
    }
    else if(d<t) {
        if(k<n) return(cout<<"YES",0);
        else return(cout<<"NO",0);
    }
    else
    {
        if(ceil((double)d/t)*k < n && n-d/t*k>k) return(cout<<"YES",0);
        else return (cout<<"NO",0);
    }
    if(t1>t2) cout<<"YES";
    else cout<<"NO";
}