#include <iostream>
#include <iomanip>
using namespace std;

#define SIZE 105

int M[SIZE][SIZE], maxi;
double sum;

void build(int l, int r, int p)
{
    if(l >= r)
        return;
    
    //cout<<"l "<<l<<" r "<<r<<endl;
    
    int root = M[l][r];
    maxi = max(maxi, p);
    sum += root;
    
    build(l, root-1, p+1);
    build(root+1, r, p+1);
    
}

int main() {
   int n;
   int x = 1;
   while(cin>>n, n>=0)
   {
       
       maxi = -1;
       sum = 0.0;
       
       for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin>>M[i][j];
        
       build(1, n-1, 1);    
       
       cout<<"Case "<<x++<<":"<<endl;
       cout<<"The height of the BST is: "<<maxi+1<<endl;
       cout<<fixed<<setprecision(2);
       cout<<"The average of the search in the BST is: "<<sum/(n-1)<<endl;
       
   }
   
   return 0;
}
