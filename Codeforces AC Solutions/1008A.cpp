/*
Problem Name: A - Romaji
Problem ID: 1008A
Problem URL: https://codeforces.com/contest/1008/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 40265270
Solution Time: 2018-07-13 17:40:18
Language: GNU C++11
Time consumed: 31 ms
Memory consumed: 0 KB
*/
#include<iostream>
#include<cmath>
#include<vector>
#include<string>
#include<set>
#include<algorithm>
#include <iomanip> 
//#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long long int ll;

#define speed ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(c) c.begin(), c.end()
#define allr(c) c.rbegin(), c.rend()
#define present(container, element) (container.find(element) != container.end()) 
#define cpresent(container, element) (find(all(container),element) != container.end()) 
#define se second
#define fi first
#define sz(a) int((a).size())
#define mp make_pair 
#define pb push_back 
#define endl "\n"
#define dbg(x) { cout<< #x << ": " << (x) << endl; }
#define dbg2(x,y) { cout<< #x << ": " << (x) << " , " << #y << ": " << (y) << endl; }

#define INF 1e18;
#define EPS 1e-9
#define MOD 1000000007


int main() {
  //  freopen("input.txt", "r", stdin);
    speed;
    
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++) {
        if(s[i]!=&#39;a&#39; && s[i]!=&#39;e&#39;&& s[i]!=&#39;i&#39;&& s[i]!=&#39;o&#39;&& s[i]!=&#39;u&#39;) {
            if(s[i]!=&#39;n&#39;) {
            if(i==s.length()-1) {cout<<"NO"; return 0;}
            if(s[i+1]!=&#39;a&#39; && s[i+1]!=&#39;e&#39;&& s[i+1]!=&#39;i&#39;&& s[i+1]!=&#39;o&#39;&& s[i+1]!=&#39;u&#39;)
                {cout<<"NO"; return 0;}}

        }

    }
    cout<<"YES";
}