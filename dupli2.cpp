#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

    bool isThere(vector<int> nums, int l, int h)
    {
       sort(nums.begin()+l,nums.begin()+h+1);
        int c=0;
        for(int i=l;i<h;i++)
        {
            if(nums[i]==nums[i+1])
                c++;
                
        }
        return c==1?true:false;;
    }
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        if(k<=1)
            return false;
        int c=0;
        for(int i=0;i+k<nums.size();i++)
        {
            if(isThere(nums,i,i+k))
                c++;
            if(c>1)
                return false;
        }
        if(c==1)
            return true;
        return false;
        
    }

int main()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	if(containsNearbyDuplicate(v,2))
		cout<<"yes";
	return 0;
}