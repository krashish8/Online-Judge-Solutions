/*
Problem Name: A - Games
Problem ID: 268A
Problem URL: https://codeforces.com/contest/268/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46447253
Solution Time: 2018-12-01 17:10:45
Language: GNU C++14
Time consumed: 62 ms
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
    
    int n;
    cin>>n;
    int a[n],b[n],c=0;
    for (int i = 0; i < n; ++i)
    {
    	cin>>a[i]>>b[i];
    }
    for (int i = 0; i < n; ++i)
    {
    	for(int j=0;j<n;j++) {
    		if(j==i) continue;
    		if(a[i]==b[j]) c++;
    	}
    }
    cout<<c;
	return 0;
}