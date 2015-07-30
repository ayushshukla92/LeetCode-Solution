#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<sstream>
using namespace std;

string getStr(int n)
{
	stringstream ss;
	ss<<n;
	return ss.str();
}

 string countAndSay(string n)
{
	
	int count=1,i=1;
	string r="";
	string f="";
	f+=n[0];
	for(i=1;i<n.length();i++)
	{
		if(n[i]==n[i-1])
			count++;
		else
		{
			r+=getStr(count);
			r=r+f;
			f=n[i];
			count = 1 ;
		}
	}
	r+=getStr(count);
	r+=(n[i-1]);

	return r;	
}

int main()
{
	int  n;
    cin >> n;
    
    cout<<countAndSay(getStr(n));

	return 1;
}
