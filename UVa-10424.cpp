#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;


int main(){
	string s1, s2;
	int v1, v2;
	while(getline(cin, s1)){
		getline(cin, s2);

		v1 = 0;
		v2 = 0;

		transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
		transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

		
		for(char a: s1){
			if((a <= 'z')&&(a >= 'a'))
				v1+=int( a-'a'+1);
									
		}	
		

		int res1 = v1;	
		while(v1/10 != 0){

			res1=0;	
			while(v1!=0){
				res1 += v1%10;
				v1/=10;				
			}
		
			v1 = res1;	
		}

		
		for(char a: s2){
			if((a <= 'z')&&(a >= 'a'))
				v2 += int( a-'a'+1);
			
		}


		int res2 = v2;
		while(v2/10 != 0){

			res2=0;	
			while(v2!=0){
				res2 += v2%10;
				v2/=10;				
			}
		
			v2 = res2;	
		}
		
	
		if(res1 > res2)
			swap(res1, res2);

		cout<<fixed<<setprecision(2)<<(double(res1)/double(res2))*100<<" %"<<endl;
		
	}

	return 0;
}