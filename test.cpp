#include <iostream>
#include <vector> 
using namespace std;
    int getP(vector<int>& v,int l,int h)
    {
        int m=l+(h-l)/2;
        if(l+1==h)
            return v[l]>v[h]?l:h;
        if(v[m]>v[m+1] && v[m]>v[m-1])
            return m;
        else if(v[m]>v[h])
           return getP(v,m,h);
        else
            return getP(v,l,m);
        
    }
    int binSearch(vector<int>v,int l,int h, int k)
    {

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
     return -1;	

    }
    int search(vector<int>& nums, int target) {
        int l = getP(nums,0,nums.size()-1);
        cout<<l<<endl;
        int res;
        if((res=binSearch(nums,0,l,target))!=-1)
            return res;
        else
            return binSearch(nums,l+1,nums.size()-1,target);
    }

int main()
{
	vector<int >v;
	// v.push_back(11);
	// v.push_back(22);
 //    	v.push_back(3);
	v.push_back(1);
	cout<<search(v,1);

	return 0;
}