#include <iostream>
using namespace std;

int main()
{
	long long original, copies;

	cin>>copies>>original;

	if(original == 0)
		cout<<"No"<<endl;
	else if(original == 1 && copies != 0)
		cout<<"No"<<endl;
	else if((original&1)== (copies&1))
		cout<<"No"<<endl;
	else if(copies < original-1)
		cout<<"No"<<endl;
	else
		cout<<"Yes"<<endl;
	return 0;
}