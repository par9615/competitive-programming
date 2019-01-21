//Rutina para separar string en tokens separados por un caracter
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> tokenize(string s, char c)
{
	vector<string> res;
	int len = s.length();
	string aux = "";

	for(int i = 0; i < len; i++)
	{
		if(s[i] == c)
		{
			res.push_back(aux);
			aux = "";
		}
		else
			aux += s[i];		
	}
	res.push_back(aux);

	return res;

}

int main()
{
	string s = ",hola,amigos,como,estan";
	vector<string> v = tokenize(s,',');

	for(int i = 0; i < v.size(); i++)
		cout<<"\""<<v[i]<<"\""<<",";
	
	return 0;
}