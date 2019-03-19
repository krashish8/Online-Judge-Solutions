/*
Problem Name: A - Police Recruits
Problem ID: 427A
Problem URL: https://codeforces.com/contest/427/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46445716
Solution Time: 2018-12-01 16:18:36
Language: GNU C++14
Time consumed: 46 ms
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
  //  freopen("input.txt", "r", stdin);
    IOS;
    
    int n;
    cin>>n;
    int a[n];
    int s=0,ans=0;
    for (int i = 0; i < n; ++i)
    {
    	cin>>a[i];
    	if(a[i]>0 && s<0) {
    		ans+=abs(s);
    		s=0;
    		s+=a[i];
    	}
    	else s+=a[i];
    	

    }
    if(s<0)
    ans+=abs(s);
    cout<<ans;
	return 0;
}