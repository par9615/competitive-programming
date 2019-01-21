#include <iostream>
using namespace std;

int main()
{
	string s,aux;
	int len, ans = 0;
	cin>>s;
	len = s.length();

	for(int i = 0; i < len-2; i++)
	{
		for(int j = i+1; j < len-1; j++)
		{
			for(int k = j+1; k < len; k++)
			{
				aux ="ABC";
				aux[0]=s[i];
				aux[1]=s[j];
				aux[2]=s[k];
				if(aux == "QAQ")
					ans++;
			}
		}
	}	

	cout<<ans<<endl;

	return 0;
}