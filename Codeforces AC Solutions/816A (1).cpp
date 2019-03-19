/*
Problem Name: A - Karen and Morning
Problem ID: 816A
Problem URL: https://codeforces.com/contest/816/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 38765663
Solution Time: 2018-05-30 11:34:53
Language: GNU C++14
Time consumed: 31 ms
Memory consumed: 3300 KB
*/
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	//freopen("input.txt","r",stdin);
	string s;
	cin>>s;
	stringstream ss(s.substr(0,2));
	int h,m,hrev;
	ss>>h;
	stringstream ss1(s.substr(3,5));
	ss1>>m;
	string htemp="";
	for(int i=0;i<=1;i++)
	{
		htemp = s[i]+htemp;
	}
	stringstream ss2(htemp);
	ss2>>hrev;
	int min = h*60+m;
	string rev="";
	for(int i=0;i<s.length();i++)
	{
		rev = s[i]+rev;
	}
	if(rev == s)
		cout<<"0";
	else if(h==23)
	{
		if(m<=32) cout<<32-m;
		else cout<<60-m;
	}
	else
	{
		if(h<5 || (h>=10 && h<15) || (h>=20 && h<23) || (h==5 && m<=50) || (h==15 && m<=51))
		{
			if(m<hrev) cout<<hrev-m;
			else cout<<60-m+hrev+10;
		}
		if((h>=6 && h<10)||(h==5 && m>50))
		{
			cout<<10*60+1-min;
		}
		if((h>=16 && h<20)||(h==15 && m>51))
		{
			cout<<20*60+2-min;
		}
	}
	
	return 0;
}