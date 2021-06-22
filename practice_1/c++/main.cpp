<<<<<<< Updated upstream
=======

>>>>>>> Stashed changes
#include<ncurses.h>
#include<math.h>
#include <vector>
#include <errno.h>
#include <sstream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <fstream>
int sizeFile100;
int sizeFile500;
int sizeFile1000;
int sizeFile2000;
int sizeFile3000;
int sizeFile10000;
int sizeFile20000;
int sizeFile30000;
int sizeFile100000;

int *arrayData100;
int *arrayData500;
int *arrayData1000;
int *arrayData2000;
int *arrayData3000;
int *arrayData10000;
int *arrayData20000;
int *arrayData30000;
int *arrayData100000;

#include "readFile.h"
#include "bubbleSort.h"
<<<<<<< Updated upstream
=======
#include "selectionSort.h"
#include "mergeSort.h"
#include "heapSort.h"
#include "countingSort.h"
#include "insertionSort.h"
#include "quickSort.h"
>>>>>>> Stashed changes


// bubble soprt, heap sort, merge sort, selection sort
using namespace std;

//void bubbleSort(arrayDatosInt,sizeFile);
void menuAlgorithm();
void problema2(void);
void problema3(void);
void problema4(void);

void menu(void);
int main(){
	sizeFile100=readFiles(100);
	sizeFile500=readFiles(500);
	sizeFile1000=readFiles(1000);
	sizeFile2000=readFiles(2000);
	sizeFile3000=readFiles(3000);
	sizeFile10000=readFiles(10000);
	sizeFile20000=readFiles(20000);
	sizeFile30000=readFiles(30000);
	sizeFile100000=readFiles(100000);
	menuAlgorithm();
}

void menuAlgorithm(){
	int  opc=0;
    printf("================================\n");
    printf("select option\n");
    printf("================================\n");
    printf("1)bubbleSort \n");
    printf("2)\n");
    printf("3)\n");
    printf("4)\n");
    printf("=================================\n");
    scanf("%d",&opc);
    printf("=================================\n");
    switch(opc){
    case 1: 
		{
		ofstream outfile ("BubbleSort.txt");

		string tiempo=bubbleSort(arrayData100,sizeFile100);
		outfile << "100,"+tiempo<< std::endl;
		tiempo=bubbleSort(arrayData500,sizeFile500);
		outfile << "500,"+tiempo<< std::endl;
		tiempo=bubbleSort(arrayData1000,sizeFile1000);
		outfile << "1000,"+tiempo<< std::endl;
		tiempo=bubbleSort(arrayData2000,sizeFile2000);
		outfile << "2000,"+tiempo<< std::endl;
		tiempo=bubbleSort(arrayData3000,sizeFile3000);
		outfile << "3000,"+tiempo<< std::endl;
		tiempo=bubbleSort(arrayData10000,sizeFile10000);
		outfile << "10000,"+tiempo<< std::endl;
		tiempo=bubbleSort(arrayData20000,sizeFile20000);
		outfile << "20000,"+tiempo<< std::endl;
		tiempo=bubbleSort(arrayData30000,sizeFile30000);
		outfile << "30000,"+tiempo<< std::endl;
		tiempo=bubbleSort(arrayData100000,sizeFile100000);
		outfile << "100000,"+tiempo<< std::endl;
		outfile.close();
		}
    break;  
    case 2:
    	problema2();
    break;
<<<<<<< Updated upstream
    case 3:
    	problema3();
    break;
    case 4:
    	problema4();
=======
    case 3:// heap sort
	{
cout<<"heap sort:"<<endl;
		std::ofstream outfile ("HeapSort.txt");
	string tiempo=heapSort(arrayData100,sizeFile100);
	outfile << "100,"+tiempo<< std::endl;
	tiempo=heapSort(arrayData500,sizeFile500);
	outfile << "500,"+tiempo<< std::endl;
	tiempo=heapSort(arrayData1000,sizeFile1000);
	outfile << "1000,"+tiempo<< std::endl;
	tiempo=heapSort(arrayData2000,sizeFile2000);
	outfile << "2000,"+tiempo<< std::endl;
	tiempo=heapSort(arrayData3000,sizeFile3000);
	outfile << "3000,"+tiempo<< std::endl;
	tiempo=heapSort(arrayData4000,sizeFile4000);
	outfile << "4000,"+tiempo<< std::endl;
	tiempo=heapSort(arrayData5000,sizeFile5000);
	outfile << "5000,"+tiempo<< std::endl;
	tiempo=heapSort(arrayData6000,sizeFile6000);
	outfile << "6000,"+tiempo<< std::endl;
	tiempo=heapSort(arrayData7000,sizeFile7000);
	outfile << "7000,"+tiempo<< std::endl;
	tiempo=heapSort(arrayData8000,sizeFile8000);
	outfile << "8000,"+tiempo<< std::endl;
	tiempo=heapSort(arrayData9000,sizeFile9000);
	outfile << "9000,"+tiempo<< std::endl;
	tiempo=heapSort(arrayData10000,sizeFile10000);
	outfile << "10000,"+tiempo<< std::endl;
	tiempo=heapSort(arrayData20000,sizeFile20000);
	outfile << "20000,"+tiempo<< std::endl;
	tiempo=heapSort(arrayData30000,sizeFile30000);
	outfile << "30000,"+tiempo<< std::endl;
	tiempo=heapSort(arrayData40000,sizeFile40000);
	outfile << "40000,"+tiempo<< std::endl;
	tiempo=heapSort(arrayData50000,sizeFile50000);
	outfile << "50000,"+tiempo<< std::endl;
	tiempo=heapSort(arrayData60000,sizeFile60000);
	outfile << "60000,"+tiempo<< std::endl;
	tiempo=heapSort(arrayData70000,sizeFile70000);
	outfile << "70000,"+tiempo<< std::endl;
	tiempo=heapSort(arrayData80000,sizeFile80000);
	outfile << "80000,"+tiempo<< std::endl;
	tiempo=heapSort(arrayData90000,sizeFile90000);
	outfile << "90000,"+tiempo<< std::endl;
	tiempo=heapSort(arrayData100000,sizeFile100000);
	outfile << "100000,"+tiempo<< std::endl;
	outfile.close();
	}
    	
    break;
    case 4: //insertion sort
    
    	insertionSort(arrayData100,sizeFile100);
    	insertionSort(arrayData500,sizeFile500);
    	insertionSort(arrayData1000,sizeFile1000);
    	insertionSort(arrayData2000,sizeFile2000);
    	insertionSort(arrayData3000,sizeFile3000);
    	insertionSort(arrayData10000,sizeFile10000);
		insertionSort(arrayData20000,sizeFile20000);
		insertionSort(arrayData30000,sizeFile30000);
		insertionSort(arrayData100000,sizeFile100000);
    break;
    case 5: //merge sort
    	{
cout<<"Merge sort:"<<endl;
		std::ofstream outfile ("mergeSort.txt");
	string tiempo=mergeSort(arrayData100,0,sizeFile100);
	outfile << "100,"+tiempo<< std::endl;
	tiempo=mergeSort(arrayData500,0,sizeFile500);
	outfile << "500,"+tiempo<< std::endl;
	tiempo=mergeSort(arrayData1000,0,sizeFile1000);
	outfile << "1000,"+tiempo<< std::endl;
	tiempo=mergeSort(arrayData2000,0,sizeFile2000);
	outfile << "2000,"+tiempo<< std::endl;
	tiempo=mergeSort(arrayData3000,0,sizeFile3000);
	outfile << "3000,"+tiempo<< std::endl;
	tiempo=mergeSort(arrayData4000,0,sizeFile4000);
	outfile << "4000,"+tiempo<< std::endl;
	tiempo=mergeSort(arrayData5000,0,sizeFile5000);
	outfile << "5000,"+tiempo<< std::endl;
	tiempo=mergeSort(arrayData6000,0,sizeFile6000);
	outfile << "6000,"+tiempo<< std::endl;
	tiempo=mergeSort(arrayData7000,0,sizeFile7000);
	outfile << "7000,"+tiempo<< std::endl;
	tiempo=mergeSort(arrayData8000,0,sizeFile8000);
	outfile << "8000,"+tiempo<< std::endl;
	tiempo=mergeSort(arrayData9000,0,sizeFile9000);
	outfile << "9000,"+tiempo<< std::endl;
	tiempo=mergeSort(arrayData10000,0,sizeFile10000);
	outfile << "10000,"+tiempo<< std::endl;
	tiempo=mergeSort(arrayData20000,0,sizeFile20000);
	outfile << "20000,"+tiempo<< std::endl;
	tiempo=mergeSort(arrayData30000,0,sizeFile30000);
	outfile << "30000,"+tiempo<< std::endl;
	tiempo=mergeSort(arrayData40000,0,sizeFile40000);
	outfile << "40000,"+tiempo<< std::endl;
	tiempo=mergeSort(arrayData50000,0,sizeFile50000);
	outfile << "50000,"+tiempo<< std::endl;
	tiempo=mergeSort(arrayData60000,0,sizeFile60000);
	outfile << "60000,"+tiempo<< std::endl;
	tiempo=mergeSort(arrayData70000,0,sizeFile70000);
	outfile << "70000,"+tiempo<< std::endl;
	tiempo=mergeSort(arrayData80000,0,sizeFile80000);
	outfile << "80000,"+tiempo<< std::endl;
	tiempo=mergeSort(arrayData90000,0,sizeFile90000);
	outfile << "90000,"+tiempo<< std::endl;
	tiempo=mergeSort(arrayData100000,0,sizeFile100000);
	outfile << "100000,"+tiempo<< std::endl;
	outfile.close();
	}
    break;
    case 6: //quick sort
	{
    	unsigned t0, t1;
		t0=clock();
    		quicksort(arrayData100000,0,sizeFile100000-1);
    	t1 = clock();
    	double time = (double(t1-t0)/CLOCKS_PER_SEC);
		cout << "Size: " <<sizeFile100000 << " Execution Time quickSort100: "<< time << endl;
	}
    break;
	case 7: //selection sort
    	{
cout<<"Selection sort:"<<endl;
		std::ofstream outfile ("selectionSort.txt");
	string tiempo=selectionSort(arrayData100,sizeFile100);
	outfile << "100,"+tiempo<< std::endl;
	tiempo=selectionSort(arrayData500,sizeFile500);
	outfile << "500,"+tiempo<< std::endl;
	tiempo=selectionSort(arrayData1000,sizeFile1000);
	outfile << "1000,"+tiempo<< std::endl;
	tiempo=selectionSort(arrayData2000,sizeFile2000);
	outfile << "2000,"+tiempo<< std::endl;
	tiempo=selectionSort(arrayData3000,sizeFile3000);
	outfile << "3000,"+tiempo<< std::endl;
	tiempo=selectionSort(arrayData4000,sizeFile4000);
	outfile << "4000,"+tiempo<< std::endl;
	tiempo=selectionSort(arrayData5000,sizeFile5000);
	outfile << "5000,"+tiempo<< std::endl;
	tiempo=selectionSort(arrayData6000,sizeFile6000);
	outfile << "6000,"+tiempo<< std::endl;
	tiempo=selectionSort(arrayData7000,sizeFile7000);
	outfile << "7000,"+tiempo<< std::endl;
	tiempo=selectionSort(arrayData8000,sizeFile8000);
	outfile << "8000,"+tiempo<< std::endl;
	tiempo=selectionSort(arrayData9000,sizeFile9000);
	outfile << "9000,"+tiempo<< std::endl;
	tiempo=selectionSort(arrayData10000,sizeFile10000);
	outfile << "10000,"+tiempo<< std::endl;
	tiempo=selectionSort(arrayData20000,sizeFile20000);
	outfile << "20000,"+tiempo<< std::endl;
	tiempo=selectionSort(arrayData30000,sizeFile30000);
	outfile << "30000,"+tiempo<< std::endl;
	tiempo=selectionSort(arrayData40000,sizeFile40000);
	outfile << "40000,"+tiempo<< std::endl;
	tiempo=selectionSort(arrayData50000,sizeFile50000);
	outfile << "50000,"+tiempo<< std::endl;
	tiempo=selectionSort(arrayData60000,sizeFile60000);
	outfile << "60000,"+tiempo<< std::endl;
	tiempo=selectionSort(arrayData70000,sizeFile70000);
	outfile << "70000,"+tiempo<< std::endl;
	tiempo=selectionSort(arrayData80000,sizeFile80000);
	outfile << "80000,"+tiempo<< std::endl;
	tiempo=selectionSort(arrayData90000,sizeFile90000);
	outfile << "90000,"+tiempo<< std::endl;
	tiempo=selectionSort(arrayData100000,sizeFile100000);
	outfile << "100000,"+tiempo<< std::endl;
	outfile.close();
	}
>>>>>>> Stashed changes
    break;

    }
}
void problema2(){
    
}
void problema3(){
   
}
void problema4(){
   
}

