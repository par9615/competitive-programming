#include <iostream>
#include <algorithm>
#include <set>
#include <string.h>
using namespace std;

//tried to make the permutations recursively, doesn't work
//tried insertion sort with the same criterion and also didn't work
//the mistake i was making was not using the compare in next_permutation

bool compare(char A, char B)
{
    char a = (A<'a'? A + 32 : A);
    char b = (B<'a'? B + 32 : B);
    
    if(a == b)
        return A < B;
    else
        return a < b;
        
}

int main() {
	string s;
	int t;
	cin>>t;
	
	while(t--)
	{
	    cin>>s;
	  
	    sort(s.begin(), s.end(), compare);
	    
	    cout<<s<<endl;
	    while(next_permutation(s.begin(), s.end(), compare))
	    {
	        cout<<s<<endl;
	    }
	    
	}
	

    return 0;
}
