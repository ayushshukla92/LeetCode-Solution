#include<iostream>
#include<string>
using namespace std;
long reverse(int x)
{
	long r=0;
	while(x!=0)
	{	
		r=r*10;
		r+=x%10;
		x=x/10;
	}
	return r;
}

int main()
{
	int x;
	cin>>x;
	cout<<x;
	//cout<<reverse(x);
	return 1;
}