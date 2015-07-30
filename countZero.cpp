#include<iostream>
using namespace std;

int main()
{
	long it=5;
	int count=0;
	int n=2147483647;
        while(it<=n)
        {
            count+=n/it;
            it=it*5;
        }
    cout<<count;
	return 1;
}
