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
	    bubbleSort(arrayData100,sizeFile100);
		bubbleSort(arrayData500,sizeFile500);
		bubbleSort(arrayData1000,sizeFile1000);
		bubbleSort(arrayData2000,sizeFile2000);
		//bubbleSort(arrayData3000,sizeFile3000);
		//bubbleSort(arrayData10000,sizeFile10000);
		//bubbleSort(arrayData20000,sizeFile20000);
		//bubbleSort(arrayData30000,sizeFile30000);
		//bubbleSort(arrayData100000,sizeFile100000);
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

