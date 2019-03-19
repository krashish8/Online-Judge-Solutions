/*
Problem Name: K - Video Posts
Problem ID: 1070K
Problem URL: https://codeforces.com/contest/1070/problem/K
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46402341
Solution Time: 2018-11-30 15:51:59
Language: GNU C++14
Time consumed: 46 ms
Memory consumed: 400 KB
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

    int n,k;
    cin>>n>>k;
    int a[n],s=0;
    for (int i = 0; i < n; ++i)
    {
    	cin>>a[i];
    	s+=a[i];
    }
    if(s%k!=0) return (cout<<"No",0);
    s/=k;
    int t=0,i1=-1,i2;
    int flag=0;
    for (int i = 0; i < n; ++i)
    {
    	t+=a[i];
    	if(t==s) {
    		i2=i;
    		if(flag==0) {cout<<"Yes\n"; flag=1;}
    		cout<<i2-i1<<" ";
    		t=0;
    		i1=i;
    	}
    	else if(t>s) {
    		return (cout<<"No",0);
    	}
    }
    if(flag==0) return(cout<<"No",0);
    return 0;
}