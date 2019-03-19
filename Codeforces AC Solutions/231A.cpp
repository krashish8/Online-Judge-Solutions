/*
Problem Name: A - Team
Problem ID: 231A
Problem URL: https://codeforces.com/contest/231/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46440176
Solution Time: 2018-12-01 14:28:21
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
#define rep(i,a,b) for(int i=a;i<b;++i)
#define dbg(x) { cout<< #x << ": " << (x) << endl; }
#define dbg2(x,y) { cout<< #x << ": " << (x) << " , " << #y << ": " << (y) << endl; }
#define eps 0.0000001
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)



int main(){
   // freopen("input.txt", "r", stdin);
    IOS;

    int n,cn=0;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
    	int a,b,c;
    	cin>>a>>b>>c;
    	if((a==1 && b==1)||(a==1 && c==1)||(b==1 && c==1))
    	cn++;
    }
    cout<<cn;
}