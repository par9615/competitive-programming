//Rutinas básicas de IO
#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <iomanip>
using namespace std;

//Arrays 
//Matrices
	//for auto
//Test cases
	//While --
	//While EOF (comp)
//cin.getline()
//getline(cin,str);
	//cin.ignore();
//stringstream
//to_string
//stoi
	//convertir de hex a dec
//Tokenize - join
//Formateo
//Tips de fastops


vector<string> tokenize(string str, char delim)
{
	vector<string> res;
	string aux;

	for(auto a: str)
	{
		if(a != delim)
			aux += a;
		else 
		{
			res.push_back(aux);
			aux = "";
		}
	}

	return res;
}


string join(vector<string> vs, string delim)
{
	string str;
	int size = vs.size();

	for(int i = 0; i < size-1; i++)
		str+= vs[i]+delim;

	str+=vs[size-1];

	return str;
}

#define endl '\n'

int main()
{
	//Arrays
	/*int n, a[1010];
	cin>>n;
	for(int i=0; i < n; i++)
		cin>>a[i];

	for(int i=0; i < n; i++)
		cout<<a[i]<<" ";*/

	//Matrices
	/*int n,m;
	char a[1010][1010];
	cin>>n>>m;
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			cin>>a[i][j];

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			cout<<a[i][j];
		}
		cout<<endl;
	}*/

	//for auto
	/*vector<int> v = {1,2,3,4,5,6,7,8};
	for(auto a: v)
		cout<<a<<" ";*/

	//Test cases

	//cin.getline();
	/*char a[1000];
	int n;
	cin>>n;	
	//fflush(stdin);
	cin.ignore();
	//cin.getline(a,n);
	cin.getline(a, n, ',');
	for(int i = 0; i < n; i++)
		cout<<a[i];*/


	//getline(cin,str)
	/*string str;
	getline(cin, str);
	getline(cin, str, ',');
	cout<<str<<endl;*/

	//stringstream
	/*int a[1000];
	//vector<int> a;
	int aux, i = 0;
	string in;
	stringstream ss;

	getline(cin, in);
	ss.str(in);

	while(ss >> aux)
	{
		a[i] = aux;
		cout<<a[i]<<endl;
		i++;
	}*/

	//tokenize
	/*string str = "hola,amigos,como,estan";
	vector<string> v = tokenize(str, ',');
	for(auto a: v)
		cout<<a<<endl;

	cout<<join(v,"- ");*/


	//Formateo
	/*cout<<hex<<15<<endl;
	cout<<hex<<uppercase<<15<<endl;
	cout<<fixed<<setprecision(4)<<3.14169454<<endl;
	cout<<dec;
	cout<<setfill('0')<<setw(6)<<999<<endl;*/


	//to_string
	/*long long a = 1234123412341234;
	string str = to_string(a);
	str[5] = '>';
	cout<<str<<endl;*/

	//stoi
	/*string str = "1111";
	long long a = stoll(str, nullptr, 2);
	cout<<a<<endl;*/

	int i;
	cin>>hex>>i;
	cout<<i<<endl;








	return 0;
}