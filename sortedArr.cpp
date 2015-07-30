#include <iostream>
#include <vector> 
using namespace std;
    int getP(vector<int>& v)
    {
       int l=0,h=v.size()-1;
       while(h>l)
       {
       	int m=l+(h-l)/2;
       	if(v[m]<v[h])
       		h=m;
       	else
       		l=m+1;
       }
       return l;
    }
        
    int binSearch(vector<int>v,int k)
    {
    	int l=0,h=v.size()-1;
    	while(h>=l)
    	{
    		int m=l+(h-l)/2;
			if(v[m]==k)
				return m;
			else if(v[m]>k)
				h=m-1;
			else 
				l=m+1;
    	}
    // return -1;	

    }

int main()
{
	vector<int >v;
	v.push_back(10);
	v.push_back(11);
	v.push_back(22);
	v.push_back(3);
	v.push_back(4);
	cout<<getP(v);

	return 0;
}