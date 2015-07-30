#include <iostream>
#include <vector>
using namespace std;

int getMin(vector<int> &nums)
{
    while(left < right){
        mid = (left + right) >> 1;
        if(nums[mid] > nums[right]) left = mid + 1;   // 1,0           2,1 0
        else right = mid;                       // nums [mid] < nums[right]
    }
	return res;
}

int main()
{
	vector<int> v = {10,11,12,15,18,0};
	cout<<getMin(v);
	return 0;
}