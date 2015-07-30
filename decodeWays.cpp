#include <iostream>
#include <string>
using namespace std;

int numDecodings(string s) {
      if(s.length()==0)
        return 0;
      int c=1;
      for(int i=0;i<s.length();i++)
      {
        if(s[i]<'1'|| s[i]>'9')
          return 0;
        if(i>=1 && s[i-1]<='2')
          c++;
      }
      return c;
    }

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		cout<<numDecodings(s)<<endl;
	}
	return 0;
}
