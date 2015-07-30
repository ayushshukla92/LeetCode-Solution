#include<iostream>
#include<set>
#include<vector>
using namespace std;
int getMax(int f,int l)
{
	return f>l?f:l;
}
int rob(vector<int>& nums)
{
	int l,r;
	if(nums.size()==0)
		return 0;
	if(nums.size()==1)
		return nums[0];
	l=nums[0];
	r=getMax(nums[0],nums[1]);

}


int main()
{

	return 0;
}
