/*
Problem Name: A - Noldbach problem
Problem ID: 17A
Problem URL: https://codeforces.com/contest/17/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46174149
Solution Time: 2018-11-24 17:17:31
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
#define rep(i,a,b) for(int i=a;i<b;i++)
#define dbg(x) { cout<< #x << ": " << (x) << endl; }
#define dbg2(x,y) { cout<< #x << ": " << (x) << " , " << #y << ": " << (y) << endl; }
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

bool check(int n) {
	if(n==2) return 1;
	rep(i,2,sqrt(n)+1) {
		if(n%i==0) return 0;
	}
	return 1;
}

int main(){
   // freopen("input.txt", "r", stdin);
    IOS;

    int n,k;
    cin>>n>>k;
    if(k==0) return(cout<<"YES",0);
    int prev,curr;
    int s=0,c=0;
    rep(i,2,n+1) {
    	if(!check(i)) continue;
    	prev=-1;
    	s=0;
    	rep(j,2,i) {
    		if(!check(j)) continue;
    		curr=j;
    		if(prev!=-1) s=curr+prev;
    		if(s==i-1) {c++; prev=j; goto a;}
    		prev=j;    		
    	}
    	a:;
    	if(c>=k) return(cout<<"YES",0);
    	
    }
    
    cout<<"NO";
    return 0;
}