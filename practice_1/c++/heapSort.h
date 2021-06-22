<<<<<<< Updated upstream

#include <iostream>
#include <ctime> 

using namespace std;
 
// To heapify a subtree rooted with node i which is
// an index in arr[]. n is size of heap
void heapify(int arr[], int n, int i)
{
    int largest = i; // Initialize largest as root
    int l = 2 * i + 1; // left = 2*i + 1
    int r = 2 * i + 2; // right = 2*i + 2
 
    // If left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;
 
    // If right child is larger than largest so far
    if (r < n && arr[r] > arr[largest])
        largest = r;
 
    // If largest is not root
    if (largest != i) {
        swap(arr[i], arr[largest]);
 
        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}
 
// main function to do heap sort
string heapSort(int arr[], int n)
{
    unsigned t0, t1;
	t0=clock();
    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
 
    // One by one extract an element from heap
    for (int i = n - 1; i > 0; i--) {
        // Move current root to end
        swap(arr[0], arr[i]);
 
        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
    t1 = clock();
    double time = (double(t1-t0)/CLOCKS_PER_SEC); //create
	string time_ = to_string(time);
	cout << "Execution Time: " << time_ << endl;
	return time_;
}
=======
#include<iostream>
#include <ctime> 
using namespace std;

void heapify(int arr[], int n, int i)
{
	int largest = i; // Inizializamos el más largo en la raíz
	int l = 2 * i + 1; // left = 2*i + 1
	int r = 2 * i + 2; // right = 2*i + 2

	// si el nodo izquierdo es más grande que la raiz
	if (l < n && arr[l] > arr[largest])
		largest = l;

	// si el nodo derecho es mas largo que el más largo que se tiene actualmente, se remplaza
	if (r < n && arr[r] > arr[largest])
		largest = r;

	// si el más grande no es una raíz
	if (largest != i) {
		swap(arr[i], arr[largest]);

		// aplicamos recursividad
		heapify(arr, n, largest);
	}
}

// main function para el heap sort
string heapSort(int arr[], int n)
{	unsigned t0, t1;//inicializamos valores de tiempo
	t0=clock();
	// reorganizamos el array
	for (int i = n / 2 - 1; i >= 0; i--)
		heapify(arr, n, i);

	// uno por uno extraemos elementos desde el heap
	for (int i = n - 1; i > 0; i--) {
		// movemos la raiz actual al final
		swap(arr[0], arr[i]);

		// llamamos  heapify para la reducción
		heapify(arr, i, 0);
	}
	//hacemos calculo del tiempo que toma el algoritmo
	t1 = clock();
	double time = (double(t1-t0)/CLOCKS_PER_SEC);
	std::ostringstream sstream;
	sstream << time;
	string time_ = sstream.str();
	cout << "Execution Time HeapSort " << n <<": "<< time_ << endl;
	return time_;

}
>>>>>>> Stashed changes
