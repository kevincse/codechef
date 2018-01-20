#include<iostream>
#include<stdio.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t, n, p,h,cw,k;
	cin>>t;
	while(t--)
	{
		h=0;cw=0;
		cin>>n>>p;
		for (int i = 0; i < n; ++i)
		{
			cin>>k;
			if(k<=p/10)
				h++;
			else if(k>=p/2)
				cw++;
		}
		if(h==2&&cw==1)
			printf("yes\n");
		else
			printf("no\n");
   }
	return 0;
}