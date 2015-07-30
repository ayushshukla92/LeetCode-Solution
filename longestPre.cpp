#include<iostream>
#include<string>
#include<vector>
using namespace std;

string getPre(string s, string t)
    {
        string r="";
        int i=0;
        while(i<s.length() && i<t.length())
        {
        	cout<<'*'<<s[i]<<'*';
        	cout<<'*'<<t[i]<<'*';	
            if(s[i]==t[i])
                r+=s[i];
            i++;

        }
        
        return r;
    }
    
    string longestCommonPrefix(vector<string> & strs) {
        
        string r="";
        if(strs.size()==0)
            return r;
        r=strs[0];
        for(int i=1;i<strs.size();i++)
        {
            r = getPre(r,strs[i]);
        }
        return r;
    }

int main()
{
	vector<string> v;
	v.push_back("aca");
	v.push_back("cba");
	cout<<longestCommonPrefix(v);
	return 1;
}