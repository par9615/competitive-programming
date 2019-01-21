#include <iostream>

using namespace std;

void merge(int arr[], int l, int m, int r)
{
	int i = l, j = m+1, k = 0;
	int n = r-l+1; //number of elements between l and r
	int aux [n];

	while((i<=m) && (j<=r))
	{
		if(arr[i] < arr[j])
			aux[k++] = arr[i++];
		else
			aux[k++] = arr[j++];
	}

	while(i<=m)
		aux[k++] = arr[i++];
	while(j<=r)
		aux[k++] = arr[j++];

	for(int i = 0; i < n; i++)
		arr[l+i] = aux[i];
}

void mergesort(int arr[], int l, int r)
{
	int m;

	if(l < r)
	{
		m = (l+r)/2;
		mergesort(arr, l, m);
		mergesort(arr, m+1, r);
		merge(arr, l, m, r);
	}
}


int main()
{
	int n = 10;
	int array[10000];

	for(int i = 0; i < n; i++)
		array[i] = n-i;


	array[0] = 10;
	array[1] = 10;
	array[2] = 9;
	array[3] = 9;


	mergesort(array, 0, n-1);

	for(int i = 0; i < n; i++)
		cout<<array[i]<<" ";
	return 0;
}