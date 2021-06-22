#include <algorithm>
#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <ctime> 
using namespace std;

string countingSort(int array[], int size) {
	unsigned t0, t1;
	t0=clock();
		int output[size]; //Salida
		int count[size]; //Contador
		int max = array[0]; //Maximo
		// Find the largest element of the array
		for (int i = 1; i < size; i++) {
			if (array[i] > max)
			max = array[i];
		}
		// Initialize count array with all zeros.
		for (int i = 0; i <= max; ++i) {
			count[i] = 0;
		}
		// Store the count of each element
		for (int i = 0; i < size; i++) {
			count[array[i]]++;
		}
		// Store the cummulative count of each array
		for (int i = 1; i <= max; i++) {
			count[i] += count[i - 1];
		}
		for (int i = size - 1; i >= 0; i--) {
			output[count[array[i]] - 1] = array[i];
			count[array[i]]--;
		}
	  	/*for(int i=0; i<size; i++)
			cout<<output[i]<<",";
		cout<<endl;*/
  	t1 = clock();
	double time = (double(t1-t0)/CLOCKS_PER_SEC);
	std::ostringstream sstream1;
	sstream1 << time;
	string time_ = sstream1.str();
	cout << "Execution Time countingSort" << size <<": "<< time_ << endl;
	return time_;
}
