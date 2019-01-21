#include <iostream>
#include <cstring>
using namespace std;

int digits[1000];
int m = 1;
string number;

void timestwo()
{
	int mult, carry = 0;
	for(int i = 0; i <m+1; i++)
	{
		mult = digits[i]*2;		
		digits[i] = (mult%10)+carry;
		carry = mult/10;
	}

	if(digits[m] != 0)
		m++;
}

void stringify()
{
	number = "";

	for(int i = m-1; i >= 0; i--)
		number+=char(digits[i] + '0');
}

bool isIn(string a, string b)
{
	int len_a, len_b;
	len_a = a.length();
	len_b = b.length();

	if(len_a > len_b || len_b < len_a*2+1)
		return false;

	for(int i = 0; i < len_a; i++)
		if(a[i] != b[i])
			return false;

	return true;
}

int main()
{

	string s[10000], n;
	int i = 0, e;
	digits[0]=1;

	while(m < 5000)
	{
		stringify();
		s[i++] = number;
		timestwo();
	}
	
	while(cin>>n)
	{
		e = -1;
		for(int j = 0; j < i; j++)
			if(isIn(n,s[j]))
			{
				e = j;
				break;
			}
		
		if(e != -1)
			cout<<e<<endl;
		else
			cout<<"no power of 2"<<endl;
	}


	return 0;
}