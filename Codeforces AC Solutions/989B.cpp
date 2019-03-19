/*
Problem Name: B - A Tide of Riverscape
Problem ID: 989B
Problem URL: https://codeforces.com/contest/989/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 39179154
Solution Time: 2018-06-12 06:24:55
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
	
	int n,p;
	cin>>n>>p;
	string s;
	cin>>s;
	int f=0;
	int i;
	for(i=0;i+p<n;i++) {
		if(s[i]!=s[i+p]) {
			if(s[i]==&#39;.&#39;) s[i]=s[i+p]==&#39;0&#39;?&#39;1&#39;:&#39;0&#39;;
			if(s[i+p]==&#39;.&#39;) s[i+p]=s[i]==&#39;0&#39;?&#39;1&#39;:&#39;0&#39;;
			f=1;
			break;
		}
		else if(s[i]==s[i+p] && s[i]==&#39;.&#39;) {
			s[i]=&#39;0&#39;;
			s[i+p]=&#39;1&#39;;
			f=1;
			break;
		}	
	}
	for(;i<n;i++) {
		if(s[i]==&#39;.&#39;) s[i]=&#39;0&#39;;
	}
	if(f==0) cout<<"No";
	else
	cout<<s;
    return 0;

}