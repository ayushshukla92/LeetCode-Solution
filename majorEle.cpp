#include<iostream>
#include<string>
using namespace std;
string titleToNumber(int n)
{
	string r="";
	while(n>=1)
	{
		r+='A'+(n-1)%26;
		n=(n-1)/26;
	}
	for(int i=0;i<r.size()/2;i++)
	{
		char t=r[i];
		r[i]=r[r.size()-1-i];
		r[r.size()-1-i]=t;
	}
	return r;
}

int main()
{
	int n;
	cin>>n;
	cout<<titleToNumber(n);
	return 1;
}
