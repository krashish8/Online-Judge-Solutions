/*
Problem Name: A - Way Too Long Words
Problem ID: 71A
Problem URL: https://codeforces.com/contest/71/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46502398
Solution Time: 2018-12-02 13:48:14
Language: GNU C++14
Time consumed: 46 ms
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
    //freopen("input.txt", "r", stdin);
    IOS;
    
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        string s;
        cin>>s;
        if(s.length()>10) {
            cout<<s[0];
            cout<<(s.length()-2);
            cout<<(char)s[s.length()-1];
        }

        else
            cout<<s;
        cout<<endl;
    }
}   