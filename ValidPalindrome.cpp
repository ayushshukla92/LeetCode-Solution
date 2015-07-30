#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
bool isPalin(string s)
{
    for(int i=0;i<s.length()/2;i++)
    {
    	if(s[i]!=s[s.length()-1-i])
    		return false;
    }
    return true;
}

int preprocess(string &s)
{
	int j=0;
	std::transform(s.begin(), s.end(), s.begin(), ::tolower);
	for(int i=0;i<s.length();i++)
    {
    	if(s[i]>='a' && s[i]<='z' || s[i]>='0' && s[i] <='9'){
    		s[j]=s[i];
    		j++;
    	}
    }
    return j;
}

int main()
{
    string in;
    getline(cin,in);
    int l = preprocess(in);
    cout<<in.substr(0,l);
    if(isPalin(in.substr(0,l)))
    	cout<<"yes";
	return 1;
}
