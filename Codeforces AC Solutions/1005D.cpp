/*
Problem Name: D - Polycarp and Div 3
Problem ID: 1005D
Problem URL: https://codeforces.com/contest/1005/problem/D
Author: Ashish Kumar (ashishkr23438)
Solution ID: 40138119
Solution Time: 2018-07-09 19:55:05
Language: GNU C++11
Time consumed: 30 ms
Memory consumed: 800 KB
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
   // freopen("input.txt", "r", stdin);
    speed;
    
    string s;
    cin>>s;
    int l=s.length();
    int sm=0,sn=0;
    int c=0;
    for(int i=0;i<l;i++) {
        sm=sm*10+s[i]-&#39;0&#39;;
        if(i!=l-1)
        sn=sn*10+s[i+1]-&#39;0&#39;;
        if(i==l-1) sn=s[i]-&#39;0&#39;;
        if((s[i]-&#39;0&#39;)%3==0) {
            c++;
            sm=0;
            sn=0;
        }
        else if(sm%3==0) {
            c++;
            sm=0;
            sn=0;
        }
        else if(sn%3==0) {
            c++;
            sm=0;
            sn=0;
            i++;

        }
        

    }
    cout<<c;

}