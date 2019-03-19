/*
Problem Name: A - Night at the Museum
Problem ID: 731A
Problem URL: https://codeforces.com/contest/731/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46446507
Solution Time: 2018-12-01 16:44:41
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
  //  freopen("input.txt", "r", stdin);
    IOS;
    
    string s;
    cin>>s;
    int a=0;
    a+=min(abs(s[0]-&#39;a&#39;),abs(s[0]-(&#39;z&#39;+1)));
    for (int i = 1; i < s.length(); ++i)
    {
    	if(s[i]>s[i-1]) {
    		a+=min(abs(s[i]-s[i-1]),abs(s[i]-(&#39;z&#39;+s[i-1]-&#39;a&#39;+1)));
    	}
    	else
    	{
    		a+=min(abs(s[i]-s[i-1]),abs(s[i]-(&#39;a&#39;+(s[i-1]-&#39;z&#39;-1))));
    	}
    }
    cout<<a;
	return 0;
}