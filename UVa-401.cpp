#include<iostream>
#include<string>
#include<algorithm>
#include<iomanip>
#include<map>
#include<vector>
#include<cmath>
#include<utility>
#include<cstring>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;


char reverse(char c)
{
	switch (c)
	{
		case 'A': return 'A';
		case 'B': return ' ';
		case 'C': return ' ';
		case 'D': return ' ';
		case 'E': return '3';
		case 'F': return ' ';
		case 'G': return ' ';
		case 'H': return 'H';
		case 'I': return 'I';
		case 'J': return 'L';
		case 'K': return ' ';
		case 'L': return 'J';
		case 'M': return 'M';
		case 'N': return ' ';
		case 'O': return 'O';
		case 'P': return ' ';
		case 'Q': return ' ';
		case 'R': return ' ';
		case 'S': return '2';
		case 'T': return 'T';
		case 'U': return 'U';
		case 'V': return 'V';	
		case 'W': return 'W';
		case 'X': return 'X';
		case 'Y': return 'Y';
		case 'Z': return '5';
		case '1': return '1';
		case '2': return 'S';
		case '3': return 'E';
		case '4': return ' ';
		case '5': return 'Z';
		case '6': return ' ';
		case '7': return ' ';
		case '8': return '8';
		case '9': return ' ';
	}
}

bool isPalindrome(string s)
{
	int i = 0;
	int j = s.length() - 1;


	while( i < j )
	{
		if(s[i] != s[j])
			return false;

		i++;
		j--;
	}

	return true;
}

bool isMirror(string s)
{
	int i = 0;
	int j = s.length() - 1;


	while( i <= j )
	{
		if(reverse(s[i]) != s[j])
			return false;

		i++;
		j--;
	}

	return true;
}

	
int main(){
	

	string s;

	while(cin>>s){
		bool p = isPalindrome(s);
		bool m = isMirror(s);

		
		if(!p && !m)
			cout<<s<<" -- is not a palindrome."<<endl;
		else if(p && !m)
			cout<<s<<" -- is a regular palindrome."<<endl;
		else if(!p && m)
			cout<<s<<" -- is a mirrored string."<<endl;
		else
			cout<<s<<" -- is a mirrored palindrome."<<endl;

		cout<<"\n";
	}
	
	return 0;
}