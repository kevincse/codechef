#include<iostream>
#include<math.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t,n,k,p;
	cin>>t;
	while(t--)
	{
		cin>>n;
		unsigned int arr[n];
		cout<<unsigned int(pow(2,32)-n-1)<<" ";
		for (int i = 1; i < n; ++i)
		{
			cout<<1<<" ";
		}
		cout<<endl;
	}
	return 0;
}