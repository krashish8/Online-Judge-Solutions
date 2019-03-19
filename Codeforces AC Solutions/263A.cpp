/*
Problem Name: A - Beautiful Matrix
Problem ID: 263A
Problem URL: https://codeforces.com/contest/263/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46440510
Solution Time: 2018-12-01 14:39:48
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
    int i,j;
    for(i=0;i<5;i++) {
    	for(j=0;j<5;j++) {
    		int a;
    		cin>>a;
    		if(a==1) goto a;
    	}
    }
    a:
    cout<<abs(i-2)+abs(j-2);
}