#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, sides, sheets, pages; 
    
    while(cin>>n, n)
    {
        sheets = ceil((n-1)/4)+1;
        sides = (n==1? 1 : sheets*2);
        pages = sides*2;
        
        /*cout<<"sides "<<sides<<endl;
        cout<<"sheets "<<sheets<<endl;
        cout<<"pages "<<pages<<endl;*/

        cout<<"Printing order for "<<n<<" pages:"<<endl;
        for(int i = 0; i < sides; i++)
        {
            cout<<"Sheet "<<(i/2)+1<<", ";

            if(!(i&1))
            {
                cout<<"front: ";
                if((pages-i)>n)
                    cout<<"Blank";
                else
                    cout<<pages-i;
                
                cout<<", "<<i+1<<endl;
            }
            else
            {
                cout<<"back : ";
                cout<<i+1<<", ";

                if((pages-i)>n)
                    cout<<"Blank"<<endl;
                else
                    cout<<pages-i<<endl;
                
                
            }

            
        }
        
    }
    return 0;
}