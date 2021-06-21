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
    case 3:
    	problema3();
    break;
    case 4:
    	problema4();
    break;
    }
}
void problema2(){
    
}
void problema3(){
   
}
void problema4(){
   
}

