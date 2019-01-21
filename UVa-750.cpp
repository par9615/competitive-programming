#include <iostream>
#include <cmath>
#include <cstring>
#include <iomanip>
using namespace std;

int row[8], t, x, y, line;

bool place(int r, int c)
{
	for(int i = 0; i < r; i++)
		if(row[i] == c || abs(row[i]-c) == abs(i-r))
			return false;
	return true;
}


void backtrack(int r)
{
	if(r == 8 && row[y] == x)
	{
		cout<<setw(2)<<line++<<"      "<<row[0]+1;
		for(int i = 1; i < 8; i++)
			cout<<" "<<row[i]+1;
		cout<<endl;
	}

	for(int c = 0; c < 8; c++)
	{
		if(place(r,c))
		{
			row[r] = c;
			backtrack(r+1);
		}
	}
}

int main()
{
	cin>>t;

	while(t--)
	{
		cin>>x>>y; //x -> row, y -> column
		x--;
		y--;

		memset(row, 0, sizeof(row)); //clear the array
		line = 1; 					 //clear solution counter

		cout<<"SOLN       COLUMN"<<endl;
		cout<<" #      1 2 3 4 5 6 7 8\n\n";

		backtrack(0);
		if(t)
			cout<<endl;

	}	
			
	return 0;
}