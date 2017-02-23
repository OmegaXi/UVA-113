#include<iostream>
#include<cmath>
using namespace std;

main()
{
	double n;
	double p;
	double k;
	while(cin>>n>>p)
	{
		k=pow(p,1.0/n);
		cout<<k;
	}
}