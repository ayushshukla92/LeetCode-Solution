#include<iostream>
#include<string>
using namespace std;

int titleToNumber(string s)
{
	int r=0;
	long mul=1;
	for(int i=s.length()-1;i>=0;i--)
	{
		int t=s[i]-'A'+1;
		r+=mul*t;
		mul=mul*26;
	}
	return r;
}
int main()
{
	string s;
	cin>>s;
	cout<<titleToNumber(s);
	return 1;
}
