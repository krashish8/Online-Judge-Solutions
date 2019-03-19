/*
Problem Name: A - HQ9+
Problem ID: 133A
Problem URL: https://codeforces.com/contest/133/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 40251111
Solution Time: 2018-07-13 09:13:48
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
   // freopen("input.txt", "r", stdin);
    speed;

    string s;
    cin>>s;
    for(int i=0;i<s.length();i++) {
        if(s[i]==&#39;H&#39; || s[i]==&#39;Q&#39; || s[i]==&#39;9&#39;) {cout<<"YES"; return 0;}
    }
    cout<<"NO";

}