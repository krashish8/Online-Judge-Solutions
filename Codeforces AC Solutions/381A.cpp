/*
Problem Name: A - Sereja and Dima
Problem ID: 381A
Problem URL: https://codeforces.com/contest/381/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46442024
Solution Time: 2018-12-01 15:27:44
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
    
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
    	cin>>a[i];
    }
    int b=0,c=n-1;
    int s1=0,s2=0;
    int t=1;
    while(b<=c) {
    	if(a[b]>a[c]) {
    		if(t%2==1)
    			s1+=a[b];
    		else 
    			s2+=a[b];
    		t++;
    		b++;
    	}
    	else {
    		if(t%2==1)
    			s1+=a[c];
    		else 
    			s2+=a[c];
    		t++;
    		c--;
    	}
    }
    cout<<s1<<" "<<s2;
	return 0;
}