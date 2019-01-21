#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){
	string str;
	cin>>str;
	int size = str.size()-1;
	int lastB;
	for(int i=size;i>=0;i--){
		if(str[i]=='B'){
			lastB = i;
			break;
		}
	}
	map<int,int> res;
	vector<int> currentArr;
	vector<int> lastArr;
	while(lastB>=0){
		if(str[lastB]=='B'){
			int offset = 1;
			currentArr.clear();
			while(str[lastB+offset] == 'A'){

				res[offset]++;
				currentArr.push_back(offset);
				offset++;

			}
			if(lastB+offset<size){
				for(int j=0;j<lastArr.size();j++){
					currentArr.push_back(lastArr[j]+offset);
					res[lastArr[j]+offset]++;
				}
			}
			lastArr.clear();
			lastArr = currentArr;
			currentArr.clear();
		}
		lastB--;
	}
	for(int i=1;i<=size;i++){
		cout<<res[i]<<endl;
	}
	return 0;
}