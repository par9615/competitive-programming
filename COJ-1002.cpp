#include<iostream>

using namespace std;




char a[10][10];
int orden, maxi = 0;
int casos[100];

bool submatriz(int x, int y, int x1, int y2) {

	for (int i = x; i <= x1; i++) {
		for (int j = y; j <= y2; j++) {
			if (a[i][j] == '#')
				return false;
		}
	}

	return true;

}

int main() {
	int cases;
	int ans = 0;
	cin >> cases;

	for (int c = 0; c < cases; c++) {
		cin >> orden;

		for (int i = 0; i < orden; i++) {
			for (int j = 0; j < orden; j++) {
				cin >> a[i][j];
			}
		}
		maxi = 0;
		ans = 0;
		int x, y;
		for(int i = 0; i < orden; i++){
			for(int j = 0; j < orden; j++){
				if(a[i][j] == '.'){
					x = i+1;
					y = j+1;
					maxi = 1;
					while(x < orden && y < orden && submatriz(i,j,x,y)){
						maxi++;
						x++;
						y++;
					}

					if(maxi>ans)ans = maxi;
				}
			}
		}

		cout<<ans<<endl;
	}



return 0;
}