/*
Problem Name: A - George and Accommodation
Problem ID: 467A
Problem URL: https://codeforces.com/contest/467/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46850807
Solution Time: 2018-12-10 15:11:22
Language: GNU C++17
Time consumed: 31 ms
Memory consumed: 0 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define pb push_back
#define pii pair<int,int>
#define fi first
#define se second
#define rep(i,a,b) for (int i=a; i<b; ++i)
#define dbg(x) { cout<< #x << ": " << (x) << endl; }
#define dbg2(x,y) { cout<< #x << ": " << (x) << " , " << #y << ": " << (y) << endl; }
#define eps 0.0000001
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)




signed main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif  
    IOS;
    
    int n,c=0;
    cin>>n;
    while(n--) {
        int a,b;
        cin>>a>>b;
        if(b-a>=2) c++;
    }
    cout<<c;
    return 0;
}