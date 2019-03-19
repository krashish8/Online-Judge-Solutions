/*
Problem Name: C - Meme Problem
Problem ID: 1076C
Problem URL: https://codeforces.com/contest/1076/problem/C
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46398583
Solution Time: 2018-11-30 14:04:06
Language: GNU C++14
Time consumed: 15 ms
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
    	int d;
    	cin>>d;
    	if(d*d<4*d) {cout<<"N\n"; continue;}
    	cout<<"Y ";
    	cout<<fixed<<setprecision(10)<<(d+sqrt(d*d-4*d))/2;
    	cout<<" "<<(d-sqrt(d*d-4*d))/2<<endl;
    }
    return 0;
}