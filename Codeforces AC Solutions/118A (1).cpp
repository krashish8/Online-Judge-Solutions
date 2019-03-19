/*
Problem Name: A - String Task
Problem ID: 118A
Problem URL: https://codeforces.com/contest/118/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 40237375
Solution Time: 2018-07-12 18:49:28
Language: GNU C++11
Time consumed: 62 ms
Memory consumed: 0 KB
*/
#include<iostream>
#include<cmath>
#include<vector>
#include<string>
#include<string.h>
#include<set>
#include<stack>
#include<queue>
#include<algorithm>
#include<iomanip>
//#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long long int ll;

#define speed ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define dbg(x) { cout<< #x << ": " << (x) << endl; }
#define dbg2(x,y) { cout<< #x << ": " << (x) << " , " << #y << ": " << (y) << endl; }

#define INF 2000000000;
#define EPS 1e-9
#define MOD 1000000007


int main() {
  //  freopen("input.txt", "r", stdin);
    speed;
    
    string s,t;
    cin>>s;
    int l=s.length();
    char ch;
    for(int i=0;i<l;i++) {
        ch=s[i];
        if(ch>=65 && ch<=90) ch+=&#39;a&#39;-&#39;A&#39;;
        if(ch!=&#39;a&#39; && ch!=&#39;e&#39; && ch!=&#39;i&#39; && ch!=&#39;o&#39; && ch!=&#39;u&#39; && ch!=&#39;y&#39;)
            t=t+&#39;.&#39;+""+ch;
    }
    cout<<t;
    
}