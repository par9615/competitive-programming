#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define SIZE 55


vector<int> a, b, c, d;
int rows, cols, layers;
char matrix[SIZE][SIZE][SIZE];
//N, E, S, W, U, D
int di[] = {-1, 0, 1,  0,  0, 0};
int dj[] = { 0, 1, 0, -1,  0, 0};
int dk[] = { 0, 0, 0,  0, -1, 1};

void print()
{
    for(int k = 0; k < layers; k++)
    {
        for(int i = 0; i < rows; i++)
        {
            for(int j = 0; j < cols; j++)
                cout<<matrix[i][j][k];
            cout<<endl;
        }
        cout<<endl;
    }
}

bool is_inside(int i, int j, int k)
{
    return (i >= 0 && i < rows && j >= 0 && j < cols && k >= 0 && k < layers);
}

int flood_fill(char code, int i, int j, int k)
{
    int res = 1;
    matrix[i][j][k] = '*';
    
    
    for(int d = 0; d < 6; d++)
    {
        if(is_inside(i+di[d], j+dj[d], k+dk[d]) && matrix[i+di[d]][j+dj[d]][k+dk[d]] == code)
            res += flood_fill(code, i+di[d], j+dj[d], k+dk[d]);
    }
    
    
    return res;
}

void print_v(vector<int> v)
{
    if(v.size() == 0)
        cout<<" 0";
    
    for(auto e: v)
        cout<<" "<<e;
    cout<<endl;
}

int main() {
    int t = 0;
    while(cin>>rows>>cols>>layers)
    {
        a.clear();
        b.clear();
        c.clear();
        d.clear();
        
        for(int k = 0; k < layers; k++)
        {
            for(int i = 0; i < rows; i++)
                for(int j = 0; j < cols; j++)
                    cin>>matrix[i][j][k];
            cin.ignore();
        }
        
        
        for(int k = 0; k < layers; k++)
            for(int i = 0; i < rows; i++)
                for(int j = 0; j < cols; j++)
                {
                    int code = matrix[i][j][k];
                    
                    if(code != '*')
                    {
                        int val = flood_fill(code, i, j, k);
                        switch(code)
                        {
                            case 'a':
                                a.push_back(val);
                            break;
                            case 'b':
                                b.push_back(val);
                            break;
                            case 'c':
                                c.push_back(val);
                            break;
                            case 'd':
                                d.push_back(val);
                            break;
                        }
                    }
                        
                }
    
        sort(a.begin(), a.end(), greater<int>());
        sort(b.begin(), b.end(), greater<int>());
        sort(c.begin(), c.end(), greater<int>());
        sort(d.begin(), d.end(), greater<int>());
      
       if(t != 0)
        cout<<endl;
       
       cout<<"Case "<<++t<<":"<<endl;
       cout<<"a";
       print_v(a);
       cout<<"b";
       print_v(b);
       cout<<"c";
       print_v(c);
       cout<<"d";
       print_v(d);
    }
    
    return 0;
}
