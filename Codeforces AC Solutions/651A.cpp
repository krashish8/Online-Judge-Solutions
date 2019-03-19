/*
Problem Name: A - Joysticks
Problem ID: 651A
Problem URL: https://codeforces.com/contest/651/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 40018109
Solution Time: 2018-07-06 07:31:33
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
    //freopen("input.txt", "r", stdin);
    speed;
    
    int a,b;
    cin>>a>>b;
    if(a>b) {
        int temp=a;
        a=b;
        b=temp;
    }
    int s=0;
    if(a==1&&b==1) {cout<<0; return 0;}
    while(a!=0 && b!=0) {
        s++;
        a+=1;
        b-=2;
        if(b==1 || b==2) {
            int temp=a;
            a=b;
            b=temp;
        }

    }
    cout<<s;
}