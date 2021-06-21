#include<iostream>
#include <ctime> 
using namespace std;

void bubbleSort(int array[],int size){
	unsigned t0, t1;
	t0=clock();
		int i, j, temp;
	    for(i=0; i<(size-1); i++){
	        for(j=0; j<(size-i-1); j++){
	            if(array[j]>array[j+1]){
	                temp = array[j];
	                array[j] = array[j+1];
	                array[j+1] = temp;
	            }
	        }
	    }
	    /*for(i=0; i<size; i++)
	        cout<<array[i]<<",";
	    cout<<endl;*/
	t1 = clock();
 
	double time = (double(t1-t0)/CLOCKS_PER_SEC);
	cout << "Size: " <<size << " Execution Time bubbleSort: " << time << endl;
}
