#include<iostream>
#include <ctime> 
using namespace std;

string bubbleSort(int array[],int n){
	unsigned t0, t1;
	t0=clock();
		int i, j, temp;
	    for(i=0; i<(n-1); i++){
	        for(j=0; j<(n-i-1); j++){
	            if(array[j]>array[j+1]){
	                temp = array[j];
	                array[j] = array[j+1];
	                array[j+1] = temp;
	            }
	        }
	    }
	    cout<<"\n Array Sorted Successfully!\n";
	    cout<<"\n The New Array is: \n";
	    for(i=0; i<n; i++)
	        cout<<array[i]<<",";
	    cout<<endl;
	t1 = clock();
 
	double time = (double(t1-t0)/CLOCKS_PER_SEC);
	string time_ = to_string(time);
	cout << "Execution Time: " << time_ << endl;
	return time;
}
