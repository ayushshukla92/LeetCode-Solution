#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void revW(string &s,int l, int h)
{
	while(h>=l)
	{
		char p=s[l];
		s[l]=s[h];
		s[h]=p;
		h--;
		l++;
	}
}

void reverseWords(string &s)
{
	reverse(s.begin(),s.end());
	int l=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]==' ')
		{
			revW(s,l,i-1);
			l=i+1;
		}

	}
	if(l<s.length())
	{
		revW(s,l,s.length()-1);
	}
	//s.replace(" ","");
	cout<<s<<endl;
	// for()
}
void modify(string &s)
{
	size_t ind;
	while((ind = s.find("  "))!=string::npos)
	{
		s.replace(ind,2," ");
	}
	if(s[0]==' ')
		s.replace(0,1,"");
	if(s[s.length()-1]==' ')
		s.replace(s.length()-1,2,"");
}

int main()
{
	string s= "  ayush is good     ";
	modify(s);
	cout<<s;
	//reverseWords(s);
	return 0;
}