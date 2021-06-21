# -*- coding: utf-8 -*-
"""
Created on Fri Jun 18 21:59:50 2021

@author: User
"""

import glob
from timeit import default_timer
def Bubble_Sort (arr):
    inicio = default_timer ()
    band= False
    while  band == False:
        band=True
        for i in range(len(arr)-1):
            if arr[i]>arr[i+1]:
                aux=arr[i]
                arr[i]=arr[i+1]
                arr[i+1]=aux
                band=False
    
    fin = default_timer ()
    print(fin-inicio)
    return arr     

lista_archivos_prueba = [f for f in glob.glob("Bases_Datos_Numeros/*.txt")]

for i in lista_archivos_prueba:
    my_file = open(i, "r")
    content_list = my_file.readlines()
    listas= []
    for j in content_list:
        listas.append(int(j))
    print(i)  
    Calculado = Bubble_Sort(listas)
    print("********")
