#include <iostream>
#include <sstream>
#include <stack>
#include <string>
#include <iomanip>

using namespace std;

std::string::size_type sz;

int main() {
   string s;
   stack<double> q;
   
   while(getline(cin, s))
   {
       stringstream ss(s);
       
       while(ss>>s) 
       {
           if(s != "+" && s != "-" && s != "*" && s != "/")
           {
               double d = stod(s, &sz);
               q.push(d);
           }
           else 
           {
               double x, y;
               x = q.top();
               q.pop();
               y = q.top();
               q.pop();
               
               //cout<<"X "<<x<<" Y "<<y<<endl;
               
               if(s == "+")
                q.push(x+y);
                if(s == "-")
                q.push(y-x);
                if(s == "*")
                q.push(x*y);
                if(s == "/")
                q.push(y/x);
               
           }
       }
       cout<<fixed<<setprecision(4);
       cout<<q.top()<<endl;
       q.pop();
   }
   
    return 0;
}
