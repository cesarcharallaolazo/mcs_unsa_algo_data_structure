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
#include "countingSort.h"
#include "insertionSort.h"
#include "quickSort.h"

using namespace std;
void menuAlgorithm();
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
	    /*bubbleSort(arrayData100,sizeFile100);
		bubbleSort(arrayData500,sizeFile500);
		bubbleSort(arrayData1000,sizeFile1000);
		bubbleSort(arrayData2000,sizeFile2000);
		bubbleSort(arrayData3000,sizeFile3000);
		bubbleSort(arrayData10000,sizeFile10000);
		bubbleSort(arrayData20000,sizeFile20000);
		bubbleSort(arrayData30000,sizeFile30000);
		bubbleSort(arrayData100000,sizeFile100000);*/
		
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
		
		menuAlgorithm();
    break;  
    case 2: // counting sort
    	countingSort(arrayData100,sizeFile100);
    	countingSort(arrayData500,sizeFile500);
    	countingSort(arrayData1000,sizeFile1000);
    	countingSort(arrayData2000,sizeFile2000);
    	countingSort(arrayData3000,sizeFile3000);
    	countingSort(arrayData10000,sizeFile10000);
		countingSort(arrayData20000,sizeFile20000);
		countingSort(arrayData30000,sizeFile30000);
		countingSort(arrayData100000,sizeFile100000);
    	menuAlgorithm();
    break;
    case 3:// heap sort
    	
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
