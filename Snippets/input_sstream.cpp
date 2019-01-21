//Rutina de input para lineas de longitud no especificada
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string input;
	stringstream ss;
	vector<int> v;			//especificar el tipo de dato 
	int aux;				//auxiliar para input

	getline(cin, input);	//se lee linea completa como string
	ss.str(input);			//se pasa sstream

	while(ss >> aux)		//se lee igual que el cin
	{
		v.push_back(aux);
	}

	
	
	return 0; 
}