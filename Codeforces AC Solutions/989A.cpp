/*
Problem Name: A - A Blend of Springtime
Problem ID: 989A
Problem URL: https://codeforces.com/contest/989/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 39178750
Solution Time: 2018-06-12 05:52:08
Language: GNU C++14
Time consumed: 31 ms
Memory consumed: 0 KB
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

	string s;
	cin>>s;
	int flag=0;
	if(s.length()>2)
	for(int i=0;i<s.length()-2;i++) {
		string t=s.substr(i,3);
		if(t=="ABC" || t=="ACB" || t=="BAC" || t=="BCA" || t=="CAB" || t=="CBA" ) {
			flag=1;
			break;
		}
	}
	if(flag==1) cout<<"Yes";
	else cout<<"No";

    return 0;

}