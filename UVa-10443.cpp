#include <iostream>
using namespace std;

int dy[] = {0, 1, 0, -1};
int dx[] = {-1, 0, 1, 0};

char matrix[1000+5][1000+5], aux[1000+5][1000+5];
int r, c, n;

bool isValid(int a, int b)
{
    return (a<r && a>=0 && b<c && b>=0);
}

void defend(int a, int b)
{
    if(matrix[a][b] == 'R')
    {
        aux[a][b] = 'R';
        for(int i = 0; i < 4; i++)
            if(isValid(a+dx[i], b+dy[i]) && matrix[a+dx[i]][b+dy[i]] == 'P')
                aux[a][b] = 'P';
    }
    else if(matrix[a][b] == 'S')
    {
        aux[a][b] = 'S';
        for(int i = 0; i < 4; i++)
            if(isValid(a+dx[i], b+dy[i]) && matrix[a+dx[i]][b+dy[i]] == 'R')
                aux[a][b] = 'R';
    }
    
    else if(matrix[a][b] == 'P')
    {
        aux[a][b] = 'P';
        for(int i = 0; i < 4; i++)
            if(isValid(a+dx[i], b+dy[i]) && matrix[a+dx[i]][b+dy[i]] == 'S')
                aux[a][b] = 'S';
    }
        
}

void print()
{
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
            cout<<matrix[i][j];
        cout<<endl;
    }
}

void copy()
{
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            matrix[i][j] = aux[i][j];
            
}


int main() {
    int t;
	
	cin>>t;
	 
	while(t--)
	{
	    cin>>r>>c>>n;
	    
	    for(int i = 0; i < r; i++)
	        for(int j = 0; j < c; j++)
	            cin>>matrix[i][j];
	    
	    for(int k = 0; k < n; k++)
	    {
	        for(int i = 0; i < r; i++)
	            for(int j = 0; j < c; j++)
	                defend(i, j);
	    
	        copy();
	    }
	  
	  
	    print();
	    if(t>0)
	        cout<<endl;
	     
	}

	return 0;
}
