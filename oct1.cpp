#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int t,n,k,p;
	bool arr[200001];
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		for (int i = 0; i <= 200000; ++i)
		{
			arr[i]=false;
		}
		for (int i = 0; i < n; ++i)
		{
			cin>>p;
			arr[p]=true;

		}
		for (int i = 0; i <= 200000; ++i)
		{
			if (!arr[i])
			{
				k--;
				if (k<0)
				{
					cout<<i<<endl;
					break;
				}
			}
		}
	}
	return 0;
}