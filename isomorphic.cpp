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
void printV(vector<int> v)
{
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<"  ";
	}
	cout<<'\n';
}
bool isIsomorphic(string s, string t)
{
	
	if(s.length()!=t.length())
		return false;
	vector<int> v;
	for(int i=0;i<=26;i++)
		v.push_back(-1);
	for(int i=0;i<s.length();i++)
	{
		if(v[s[i]-'a']!=t[i]-'a' && v[s[i]-'a']!=-1)
			return false;
		v[s[i]-'a']=t[i]-'a';
	}
	
	return true;


}

 int main()
{
	string s,t;
	cout<<s.length();
	cin>>s>>t;
	if(isIsomorphic(s, t) && isIsomorphic(t,s))
		cout<<"yes\n";
	return 1;
}
