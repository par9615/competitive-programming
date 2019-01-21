#include<iostream>
#include<cmath>
#include<string.h>

using namespace std;

//primera vez
/*int main()
{
  int tiempo, records, mes;
  double pago, prestamo;
  double dep;
  double deps[101];
  double val, pMes;

  while(true)
  {
    cin>>tiempo>>pago>>prestamo>>records;

    if(tiempo < 0 )break;

    for(auto &a: deps)a = -1;

    for(int i = 0; i < records; i++)
    {
      cin>>mes>>dep;

      deps[mes] = dep;

    }

    for(int i = 0; i < 101; i++)
      if(deps[i] == -1) deps[i] = deps[i-1];

    val = prestamo + pago;
    pMes = prestamo/tiempo;

    for(int i = 0; i <= tiempo; i++)
    {

      if(prestamo < (val *= (1-deps[i])))
        {
          cout<<i<<" month";
          if(i != 1) cout<<"s";
          cout<<endl;
          break;
        }

      else
        prestamo -= pMes;
    }

  }

  return 0;
}*/

//segunda vez
int main()
{

  int meses, devs, mes;
  double pagoMens, valor, pagoIni, prestamo, pct[110], devaluacion;

  while(cin>>meses>>pagoIni>>prestamo>>devs, meses >= 0)
  {

    for(auto &a: pct)
      a = -1;

    for(int i = 0; i < devs; i++)
    {
      cin>>mes>>devaluacion;
      pct[mes] = devaluacion;
    }

    for(int i = 0; i < 110; i++)
    {
      if(pct[i] == -1) pct[i] = pct[i-1];
    }

    valor = pagoIni + prestamo;
    pagoMens = prestamo / meses;


    for(int i = 0; i <= meses; i++)
    {
      if(prestamo < (valor *= (1-pct[i])))
      {
        cout<<i<<" month";
        if(i > 1 || i == 0) cout<<"s";
        cout<<endl;
        break;
      }


      else
          prestamo -= pagoMens;

    }


  }



  return 0;

}
