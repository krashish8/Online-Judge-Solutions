/*
Problem Name: A - Vasya and Book
Problem ID: 1082A
Problem URL: https://codeforces.com/contest/1082/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46398273
Solution Time: 2018-11-30 13:54:52
Language: GNU C++14
Time consumed: 30 ms
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

    int t;
    cin>>t;
    while(t--) {
    	int n,x,y,d;
    	cin>>n>>x>>y>>d;
    	int a=abs(y-x);
    	int b=(abs(y-1));
    	int c=(abs(n-y));
    	int m1=ceil((double)abs(x-1)/d);
    	int m2=ceil((double)abs(n-x)/d);
    	if(a%d==0) {cout<<a/d<<endl; continue;}
    	if(b%d==0 && c%d==0) {
    		if(m1+b/d <=m2+c/d) cout<<m1+b/d<<endl;
    		else cout<<m2+c/d<<endl;
    		continue;
    	}
    	if(b%d==0) cout<<m1+b/d<<endl;
    	else if(c%d==0) cout<<m2+c/d<<endl;
    	else cout<<-1<<endl;
    }
    return 0;
}