/*
Problem Name: A - Anton and Danik
Problem ID: 734A
Problem URL: https://codeforces.com/contest/734/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46438148
Solution Time: 2018-12-01 13:28:31
Language: GNU C++14
Time consumed: 31 ms
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

    int n;
    cin>>n;
    string s;
    cin>>s;
    int a=0,d=0;
    for (int i = 0; i < n; ++i)
    {
    	if(s[i]==&#39;A&#39;) a++;
    	else d++;
    }
    if(a>d) cout<<"Anton";
    else if(d>a) cout<<"Danik";
	else cout<<"Friendship";

}