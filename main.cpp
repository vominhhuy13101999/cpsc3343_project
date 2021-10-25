#include <bits/stdc++.h>
#include <iostream>
#include <ctime>
#include "sort.h"
#include <iterator>
#include <algorithm>


using namespace std;



int main()
{
    srand(time(NULL));
    int size=250000;
    int sample_size=5;
    int** carrier=generate_carrier(size,sample_size);
    string filename="./data/data_250000.txt";
    print(carrier,sample_size);
    cout<<filename<<endl;
    read_dataset(carrier,filename,size,sample_size);
    int* arr=carrier[4];
    print(arr,size);












    
    return 0;
}