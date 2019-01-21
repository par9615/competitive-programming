#include<iostream>
#include<map>

using namespace std;

map<char, int> letras;


int main(){
	
	int cases;
	char x;
	int n;
	bool unique;
	map<char,int>::iterator it;
	string last = "";
	
	string s = "",t= "";
		
	cin>>cases;
	
	while(cases--){
		
		cin>>n;
		
		for(int i = 0; i < n; i++){
			cin>>x;
			letras[x]++;
		}
		unique = false;
		it = letras.begin();
		
		
		last="";
		while(it != letras.end()){
			
			if(it->second%2 != 0 && !unique){			
					it->second--;
					unique = true;
					last = it->first;
				}
				
			else if(it->second%2 != 0){
				it->second--;
			}
						
					
			for(int i = 0; i < it->second; i+=2)
			{
				s = s + it->first;
				t = it->first + t;
			}
					
			
			
			it++;
		}
		
		s = s + last + t;
		cout<<s<<endl;
		letras.clear();
		s = "";
		t = "";
		unique = false;
		
	}
	

		
		
		
		
	

	
	return 0;
}