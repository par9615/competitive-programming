#include <iostream>
using namespace std;


int inbound(int i, int l)
{
	return (i>=0 && i < l);
}

int main()
{
	string s;
	int last;

	cin>>s;



	for(int i = 0; i < s.size(); i++)
	{
		last = 1;
		if(s[i] == '?')
		{
			if(inbound(i-1, s.size()))
			{
				if(s[i-1] == 'a')
					last &= 0;
				else
					last &= 1;
			}

			if(inbound(i+1, s.size()))
			{
				if(s[i+1] == 'a')
					last &= 0;
				else 
					last &= 1;
			}

			if(!inbound(i-1, s.size()) && !inbound(i+1, s.size()))
					s[i] = 'a';

			last = !last;

			if(last)
				s[i] = 'b';
			else
				s[i] = 'a';

		}
	}
	
	cout<<s<<endl;
	return 0;
}