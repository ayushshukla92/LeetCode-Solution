#include<iostream>
#include<set>
#include<vector>
using namespace std;
 bool isHappy(int n)
 {
 	vector<int> v;
 	for(int i=0;i<1000;i++)
 		v.push_back(-1);
 	int m=n,sum=0;
 	while(v[sum]!=1)
 	{
 		v[sum]=1;
 		sum=0;
 		while(m!=0)
 		{
 			sum+=(m%10)*(m%10);
 			m=m/10;
 		}
 		if(sum==1 || sum==10 || sum==100 || sum==1000)
 			return true;
 		cout<<sum<<'\n';
 		m=sum;
 	}
 	return false;
 }

int main()
{
	int n;
	cin>>n;
	if(isHappy(n))
		cout<<"yes";
	return 1;
}