
#include<conio.h>
#include<math.h>
#include <vector>
#include <errno.h>
#include <sstream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <sstream>
#include <fstream>
int sizeFile100, sizeFile500,sizeFile1000,sizeFile2000,sizeFile3000,sizeFile4000,sizeFile5000,sizeFile6000,sizeFile7000,sizeFile8000,sizeFile9000,
 sizeFile10000, sizeFile20000,sizeFile30000,sizeFile40000,sizeFile50000, sizeFile60000, sizeFile70000,sizeFile80000,sizeFile90000,sizeFile100000;
 
int *arrayData100,*arrayData500,*arrayData1000,*arrayData2000,*arrayData3000,*arrayData4000,*arrayData5000,*arrayData6000,*arrayData7000,*arrayData8000,*arrayData9000,
 *arrayData10000,*arrayData20000,*arrayData30000,*arrayData40000,*arrayData50000,*arrayData60000,*arrayData70000,*arrayData80000,*arrayData90000,*arrayData100000; 

#include "readFile.h"
#include "bubbleSort.h"
#include "countingSort.h"
#include "insertionSort.h"
#include "quickSort.h"

using namespace std;
void menuAlgorithm();
void menu(void);
void readTotalFiles();
void callOfstreamBubbleSort();
void callOfstreamCountingSort();

void readTotalFiles(){
	sizeFile100=readFiles(100);
	sizeFile500=readFiles(500);
	sizeFile1000=readFiles(1000);
	sizeFile2000=readFiles(2000);
	sizeFile3000=readFiles(3000);
	sizeFile4000=readFiles(4000);
	sizeFile5000=readFiles(5000);
	sizeFile6000=readFiles(6000);
	sizeFile7000=readFiles(7000);
	sizeFile8000=readFiles(8000);
	sizeFile9000=readFiles(9000);
	sizeFile10000=readFiles(10000);
	sizeFile20000=readFiles(20000);
	sizeFile30000=readFiles(30000);
	sizeFile40000=readFiles(40000);
	sizeFile50000=readFiles(50000);
	sizeFile60000=readFiles(60000);
	sizeFile70000=readFiles(70000);
	sizeFile80000=readFiles(80000);
	sizeFile90000=readFiles(90000);
	sizeFile100000=readFiles(100000);
}
int main(){
	readTotalFiles();
	menuAlgorithm();
}

void menuAlgorithm(){
	int  opc=0;
    printf("================================\n");
    printf("select option\n");
    printf("================================\n");
    printf("1)bubbleSort \n");
    printf("2)countingSort\n");
    printf("3)heapSort\n");
    printf("4)insertionSort\n");
    printf("5)mergeSort\n");
    printf("6)quickSort\n");
    printf("7)SelectionSort\n");
    printf("=================================\n");
    scanf("%d",&opc);
    printf("=================================\n");
    switch(opc){
    case 1: //buuble sort
    	try {
    		callOfstreamBubbleSort();
    	}
		catch (...) {
		  cout << "Error";
		}
		menuAlgorithm();
    break;  
    case 2: // counting sort
    	try {
    		callOfstreamCountingSort();
		}
		catch (...) {
		  	cout << "Error";
		}
    	menuAlgorithm();
    break;
    case 3:// heap sort
    	cout<<"heap sort";
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
    	cout<<"merge sort";
    break;
    case 6: //quick sort
    	unsigned t0, t1;
		t0=clock();
    		quicksort(arrayData100000,0,sizeFile100000-1);
    	t1 = clock();
    	double time = (double(t1-t0)/CLOCKS_PER_SEC);
		cout << "Size: " <<sizeFile100000 << " Execution Time quickSort100: "<< time << endl;
    break;
    }
}
void callOfstreamBubbleSort(){
	std::ofstream outfile ("BubbleSort.txt");
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
	tiempo=bubbleSort(arrayData4000,sizeFile4000);
	outfile << "4000,"+tiempo<< std::endl;
	tiempo=bubbleSort(arrayData5000,sizeFile5000);
	outfile << "5000,"+tiempo<< std::endl;
	tiempo=bubbleSort(arrayData6000,sizeFile6000);
	outfile << "6000,"+tiempo<< std::endl;
	tiempo=bubbleSort(arrayData7000,sizeFile7000);
	outfile << "7000,"+tiempo<< std::endl;
	tiempo=bubbleSort(arrayData8000,sizeFile8000);
	outfile << "8000,"+tiempo<< std::endl;
	tiempo=bubbleSort(arrayData9000,sizeFile9000);
	outfile << "9000,"+tiempo<< std::endl;
	tiempo=bubbleSort(arrayData10000,sizeFile10000);
	outfile << "10000,"+tiempo<< std::endl;
	tiempo=bubbleSort(arrayData20000,sizeFile20000);
	outfile << "20000,"+tiempo<< std::endl;
	tiempo=bubbleSort(arrayData30000,sizeFile30000);
	outfile << "30000,"+tiempo<< std::endl;
	tiempo=bubbleSort(arrayData40000,sizeFile40000);
	outfile << "40000,"+tiempo<< std::endl;
	tiempo=bubbleSort(arrayData50000,sizeFile50000);
	outfile << "50000,"+tiempo<< std::endl;
	tiempo=bubbleSort(arrayData60000,sizeFile60000);
	outfile << "60000,"+tiempo<< std::endl;
	tiempo=bubbleSort(arrayData70000,sizeFile70000);
	outfile << "70000,"+tiempo<< std::endl;
	tiempo=bubbleSort(arrayData80000,sizeFile80000);
	outfile << "80000,"+tiempo<< std::endl;
	tiempo=bubbleSort(arrayData90000,sizeFile90000);
	outfile << "90000,"+tiempo<< std::endl;
	tiempo=bubbleSort(arrayData100000,sizeFile100000);
	outfile << "100000,"+tiempo<< std::endl;
	outfile.close();
}
void callOfstreamCountingSort(){
	std::ofstream outfile2 ("CountingSort.txt");
	string tiempo=countingSort(arrayData100,sizeFile100);
	outfile2 << "100,"+tiempo<< std::endl;
	tiempo=countingSort(arrayData500,sizeFile500);
	outfile2 << "500,"+tiempo<< std::endl;
	tiempo=countingSort(arrayData1000,sizeFile1000);
	outfile2 << "1000,"+tiempo<< std::endl;
	tiempo=countingSort(arrayData2000,sizeFile2000);
	outfile2 << "2000,"+tiempo<< std::endl;
	tiempo=countingSort(arrayData3000,sizeFile3000);
	outfile2 << "3000,"+tiempo<< std::endl;
	tiempo=countingSort(arrayData4000,sizeFile4000);
	outfile2 << "4000,"+tiempo<< std::endl;
	tiempo=countingSort(arrayData5000,sizeFile5000);
	outfile2 << "5000,"+tiempo<< std::endl;
	tiempo=countingSort(arrayData6000,sizeFile6000);
	outfile2 << "6000,"+tiempo<< std::endl;
	tiempo=countingSort(arrayData7000,sizeFile7000);
	outfile2 << "7000,"+tiempo<< std::endl;
	tiempo=countingSort(arrayData8000,sizeFile8000);
	outfile2 << "8000,"+tiempo<< std::endl;
	tiempo=countingSort(arrayData9000,sizeFile9000);
	outfile2 << "9000,"+tiempo<< std::endl;
	tiempo=countingSort(arrayData10000,sizeFile10000);
	outfile2 << "10000,"+tiempo<< std::endl;
	tiempo=countingSort(arrayData20000,sizeFile20000);
	outfile2 << "20000,"+tiempo<< std::endl;
	tiempo=countingSort(arrayData30000,sizeFile30000);
	outfile2 << "30000,"+tiempo<< std::endl;
	tiempo=countingSort(arrayData40000,sizeFile40000);
	outfile2 << "40000,"+tiempo<< std::endl;
	tiempo=countingSort(arrayData50000,sizeFile50000);
	outfile2 << "50000,"+tiempo<< std::endl;
	tiempo=countingSort(arrayData60000,sizeFile60000);
	outfile2 << "60000,"+tiempo<< std::endl;
	tiempo=countingSort(arrayData70000,sizeFile70000);
	outfile2 << "70000,"+tiempo<< std::endl;
	tiempo=countingSort(arrayData80000,sizeFile80000);
	outfile2 << "80000,"+tiempo<< std::endl;
	tiempo=countingSort(arrayData90000,sizeFile90000);
	outfile2 << "90000,"+tiempo<< std::endl;
	tiempo=countingSort(arrayData100000,sizeFile100000);
	outfile2 << "100000,"+tiempo<< std::endl;
	outfile2.close();
}

