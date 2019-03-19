/*
Problem Name: B - Lecture
Problem ID: 499B
Problem URL: https://codeforces.com/contest/499/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 39168623
Solution Time: 2018-06-11 19:38:00
Language: GNU C++14
Time consumed: 62 ms
Memory consumed: 100 KB
*/
//#include<bits/stdc++.h>
#include<iostream>
using namespace std;

#define debug(n1) cout<<n1<<endl
#define speed ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define all(c) c.begin(), c.end()
#define allr(c) c.rbegin(), c.rend()
#define tr(container, it) \
      for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
#define present(container, element) (container.find(element) != container.end()) 
#define cpresent(container, element) (find(all(container),element) != container.end()) 
#define se second
#define fi first
#define sz(a) int((a).size()) 
#define pb push_back 
#define endl "\n"

int main() {
	//freopen("input.txt", "r", stdin);
	speed;

	int n,m;
	cin>>n>>m;
	string s[2][m];
	for(int i=0;i<m;i++) {
		cin>>s[0][i]>>s[1][i];
	}
	for(int i=0;i<n;i++) {
		string a;
		cin>>a;
		int j=0;
		for(j=0;j<m;j++) {
			if(s[0][j]==a) break;
		}
		if(s[0][j].length()<=s[1][j].length())
			cout<<s[0][j]<<" ";
		else
			cout<<s[1][j]<<" ";

	}
    return 0;

}