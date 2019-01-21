#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n,pos,l,r,dr,dl,ans = 0;	
	bool sl =false, sr =false;

	cin>>n>>pos>>l>>r;

	dl = abs(pos-l);
	dr = abs(pos-r);

	if(l>1)
		sl = true;
	if(r<n)
		sr = true;

	if(sl && sr)
	{
		ans += min(dl,dr); //al mas cerca
		ans += (r-l);	   //de l a r, o al reves
		ans += 2;		   //elminarcion de los extremos
	}
	
	else if(sl && !sr)
	{
		ans += dl;		//al izquierdo
		ans++;			//eliminacion
	}

	else if(!sl && sr)
	{
		ans += dr;		//al derecho
		ans++;			//elminacion
	}


	cout<<ans<<endl;
	return 0;
}