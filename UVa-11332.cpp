#include<iostream>
#include<cmath>

using namespace std;

int sumDigits(int n){
  if(n < 10) return n; //caso base

  int suma = 0;

  while(n > 9){
    suma += n % 10;
    n /= 10;
  }

  suma+=n;
  sumDigits(suma); 

}

int main()
{

  int n;
  cin>>n;

  while(n != 0)
  {


    cout<<sumDigits(n)<<endl;
    cin>>n;
  }

  return 0;
}
