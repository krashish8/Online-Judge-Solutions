/*
Problem Name: A - Magnets
Problem ID: 344A
Problem URL: https://codeforces.com/contest/344/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46441622
Solution Time: 2018-12-01 15:15:48
Language: GNU C++14
Time consumed: 92 ms
Memory consumed: 400 KB
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
    
    int n,c=0;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
    	cin>>a[i];
    	if(i!=0) {
    		if(a[i]!=a[i-1]) c++;
    	}
    }
    cout<<c+1;
	return 0;
}