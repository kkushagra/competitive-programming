#include<iostream>
#define ll long long

using namespace std;

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,z=0,p=1;
		cin>>n;
		z = n/10;
		z = z + n/5;

		cout<<z<<endl;
	}

	return 0;
}

