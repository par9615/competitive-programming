#include <iostream>

using namespace std;

int main()
{
    string s;

    while(getline(cin, s), s != "DONE")
    {
        bool p = true;
        int i = 0;
        int j = s.length()-1;
        
        for(int i = 0; i < s.length(); i++)
            if(s[i] >= 'A' && s[i] <= 'Z')
                s[i] = s[i] + 32;
        
        while(i < j)
        {
            while(s[i] < 'a' || s[i] > 'z')
                i++;
                
            while(s[j] < 'a' || s[j] > 'z')
                j--;
                
            if(s[i] != s[j])
            {
                p = false;
                break;
            }
                
            i++;
            j--;
        }
        
        if(p)
            cout<<"You won't be eaten!"<<endl;
        else
            cout<<"Uh oh.."<<endl;
        
    }
    return 0;
}
