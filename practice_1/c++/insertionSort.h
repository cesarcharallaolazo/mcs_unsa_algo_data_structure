#include<iostream>
#include <ctime> 
using namespace std;

void insertionSort(int arr[], int size){
	unsigned t0, t1;
	t0=clock();
	    int i, key, j;
	    for (i = 1; i < size; i++){
	        key = arr[i];
	        j = i - 1;
	        while (j >= 0 && arr[j] > key){
	            arr[j + 1] = arr[j];
	            j = j - 1;
	        }
	        arr[j + 1] = key;
	    }
	t1 = clock();
	double time = (double(t1-t0)/CLOCKS_PER_SEC);
	cout << "Size: " <<size << " Execution Time insertionSort: " << time << endl;
}
