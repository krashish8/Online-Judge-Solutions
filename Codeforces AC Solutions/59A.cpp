/*
Problem Name: A - Word
Problem ID: 59A
Problem URL: https://codeforces.com/contest/59/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46441384
Solution Time: 2018-12-01 15:08:08
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
    //freopen("input.txt", "r", stdin);
    IOS;
    
    string s;
    cin>>s;
    int a=0,b=0;
   	for (int i = 0; i < s.length(); ++i)
   	{
   		if(s[i]>=&#39;a&#39;&&s[i]<=&#39;z&#39;) a++;
   		else b++;
   	}
   	for (int i = 0; i < s.length(); ++i)
   	{
   		if(a>=b) s[i]=tolower(s[i]);
   		else s[i]=toupper(s[i]);
   	}
   	cout<<s;
	return 0;
}