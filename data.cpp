#include <fstream>
#include <bits/stdc++.h>
#include <iostream>
#include <cstring>
// #include "sort.h"
using namespace std;


int* generate_array(int size,char filename[],char name[]){
    int* a=(int*)malloc(size*sizeof(int));
    ofstream myfile;
    myfile.open("example.txt");
    myfile << "%s= {",name;
    
    for (int i =0; i<size;i++){
        a[i]=rand() % INT_MAX; 
        myfile<<a[i]<<" ,";
    }
    myfile<<" }";
    myfile.close();
    return a;

}