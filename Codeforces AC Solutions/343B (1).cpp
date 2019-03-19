/*
Problem Name: B - Alternating Current
Problem ID: 343B
Problem URL: https://codeforces.com/contest/343/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 40199317
Solution Time: 2018-07-11 14:28:08
Language: GNU C++11
Time consumed: 62 ms
Memory consumed: 300 KB
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
    
    string s;
    cin>>s;
    int l=s.length();
    stack <char> st;
    for (int i = 0; i < l; ++i)
    {
        if(!st.empty() && st.top()==s[i]) {
            st.pop();
        }
        else
            st.push(s[i]);

    }
    if(st.empty()) cout<<"Yes";
    else cout<<"No";
    // 343B
}