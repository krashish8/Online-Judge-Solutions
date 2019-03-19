/*
Problem Name: A - Plate Game
Problem ID: 197A
Problem URL: https://codeforces.com/contest/197/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46175902
Solution Time: 2018-11-24 18:07:36
Language: GNU C++14
Time consumed: 60 ms
Memory consumed: 0 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007
#define inf 2e9+9
#define endl &#39;\n&#39;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define dbg(x) { cout<< #x << ": " << (x) << endl; }
#define dbg2(x,y) { cout<< #x << ": " << (x) << " , " << #y << ": " << (y) << endl; }
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)



int main(){
   // freopen("input.txt", "r", stdin);
    IOS;

    int a,b,r;
    cin>>a>>b>>r;
    if(2*r>min(a,b)) cout<<"Second";
    else cout<<"First";
    return 0;
}