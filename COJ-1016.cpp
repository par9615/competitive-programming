#include<cmath>
#include<iostream>
#include<iomanip>
#include<utility>

using namespace std;

pair<double, double> punto[100];
bool conectado[100];
double dminima[100];
int actual, conectados;
double tdistancia = 0;
int ncasos;
int npuntos;
double minimo,temp;

double distancia(pair<double, double> p1, pair<double, double> p2){

	return sqrt(((p1.first - p2.first)*(p1.first - p2.first)) + ((p1.second - p2.second)*(p1.second - p2.second)));

}

void prim(int np){
	conectado[np] = 1;
	conectados++;

	if (conectados == npuntos) return;

	minimo = 999999.000f;

	for (int i = 0; i < npuntos; i++){
		if(!conectado[i]){

		 temp = distancia(punto[i], punto[np]);
		if (temp < dminima[i]) dminima[i] = temp;
		if (dminima[i] < minimo) minimo = dminima[i], actual = i;

		}
	}

	tdistancia += minimo;
	prim(actual);

}

int main()
{

	
          std::ios::sync_with_stdio(false);
	
		cin >> npuntos;
		conectados = 0;
		actual = 0;
		tdistancia = 0;
		for (int j = 0; j < npuntos; j++){

			cin >> punto[j].first >> punto[j].second;
			dminima[j] = 999999.000;
			conectado[j] = 0;
		}

		prim(0);

		cout << fixed << setprecision(2) <<tdistancia;

	

		return 0;
	}