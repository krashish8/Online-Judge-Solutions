/*
Problem Name: A - Die Roll
Problem ID: 9A
Problem URL: https://codeforces.com/contest/9/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46453500
Solution Time: 2018-12-01 19:53:34
Language: GNU C++14
Time consumed: 92 ms
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
   // freopen("input.txt", "r", stdin);
    IOS;
    
    int a,b,c;
    cin>>a>>b;
    a=max(a,b);
    c=6-a+1;
    switch(c) {
        case 1: cout<<"1/6"; break;
        case 2: cout<<"1/3"; break;
        case 3: cout<<"1/2"; break;
        case 4: cout<<"2/3"; break;
        case 5: cout<<"5/6"; break;
        case 6: cout<<"1/1"; break;
    }
}