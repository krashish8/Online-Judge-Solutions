/*
Problem Name: A - Black Square
Problem ID: 431A
Problem URL: https://codeforces.com/contest/431/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46445975
Solution Time: 2018-12-01 16:26:42
Language: GNU C++14
Time consumed: 46 ms
Memory consumed: 300 KB
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
    
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    string s;
    cin>>s;
    int ans=0;
    for (int i = 0; i < s.length(); ++i)
    {
    	int n=s[i]-&#39;0&#39;;
    	if(n==1) ans+=a;
    	else if(n==2) ans+=b;
    	else if(n==3) ans+=c;
    	else if(n==4) ans+=d;
    }
    cout<<ans;
	return 0;
}