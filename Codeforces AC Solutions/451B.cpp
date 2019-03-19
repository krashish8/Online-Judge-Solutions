/*
Problem Name: B - Sort the Array
Problem ID: 451B
Problem URL: https://codeforces.com/contest/451/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46635514
Solution Time: 2018-12-05 09:26:17
Language: GNU C++14
Time consumed: 46 ms
Memory consumed: 800 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define mod 1000000007
#define pb push_back
#define fi first
#define se second
#define rep(i,a,b) for(int i=a;i<b;++i)
#define dbg(x) { cout<< #x << ": " << (x) << endl; }
#define dbg2(x,y) { cout<< #x << ": " << (x) << " , " << #y << ": " << (y) << endl; }
#define eps 0.0000001
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define endl &#39;\n&#39;



signed main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif  
    IOS;
    

    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
    }
    int pmn=n-1,pmx=0,mx=a[0],mn=a[n-1],flag=0;
    int f1=0;
    for (int i = 1; i < n; ++i)
    {
        if(a[i]<a[i-1]) {f1=1; break;}
    }
    if(f1==0 ) {
        return(cout<<"yes\n"<<1<<" "<<1,0);
    }
    for (int i = 1; i < n; ++i)
    {
        if(a[i]<a[i-1] && flag==0) {
            flag=1;
            mx=a[i-1];
            pmx=i-1;
        }
        else if((a[i]>a[i-1] || i==n-1) && flag==1) {
            if(!(a[i]>a[i-1])) {mn=a[i]; pmn=i;}
            else {  mn=a[i-1];
            pmn=i-1; }
            break;
        }

    }
    for (int i = 1; i < n; ++i)
    {
        if(i<=pmx) {
            if(a[i]<a[i-1]) return(cout<<"no",0);
        }
        else if(i>pmx && i<=pmn) {
            if(a[i]>a[i-1]) return(cout<<"no",0);
        }
        else if(i>pmn) {
            if(a[i]<a[i-1]) return(cout<<"no",0);
        }
    }
    if((pmn+1<n && mx>a[pmn+1]) || (pmx-1>=0 && mn<a[pmx-1]))
     return(cout<<"no",0);
    cout<<"yes\n";
    cout<<pmx+1<<" "<<pmn+1;
    return 0;
}