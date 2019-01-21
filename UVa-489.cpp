#include<iostream>
#include<string>
#include<algorithm>
#include<iomanip>
#include<map>
#include<vector>
#include<cmath>
#include<utility>
#include<cstring>
#include<unordered_set>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;



	
int main(){
	int round, ok, len, wrong;
	string word, letters;


	while(cin>>round, round != -1)
	{
		cin>>word>>letters;

		ok = 0;
		wrong = 0;
		len = word.length();

		for(int i = 0; i < letters.length(); i++)
		{
			letters.erase(remove(letters.begin() + i + 1, letters.end(), letters[i]), letters.end());
		}


		for(auto a: letters)
		{
			if(word.length() == 0)
				break;

			if(word.find(a) != string::npos)
			{
				word.erase(remove(word.begin(), word.end(), a), word.end());
				ok++;
			}

			else
				wrong++;

		}

		cout<<"Round "<<round<<endl;


		if(word.length() == 0 && wrong < 7)
		cout<<"You win."<<endl;

		else if(wrong < 7 && word.length() != 0)
		cout<<"You chickened out."<<endl;

		else
		cout<<"You lose."<<endl;
	}

	return 0;
}