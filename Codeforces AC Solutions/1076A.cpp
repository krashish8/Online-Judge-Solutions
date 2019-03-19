/*
Problem Name: A - Minimizing the String
Problem ID: 1076A
Problem URL: https://codeforces.com/contest/1076/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46403485
Solution Time: 2018-11-30 16:26:19
Language: GNU C++14
Time consumed: 31 ms
Memory consumed: 900 KB
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

    int l;
    cin>>l;
    string s;
    cin>>s;
    int i;
    for(i=1;i<l;i++) {
    	if(s[i]<s[i-1]) {
    		break;
    	}
    }
    string t=s.substr(0,i-1)+s.substr(i);
    cout<<t;
    return 0;
}