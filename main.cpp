#include <bits/stdc++.h>
#include <iostream>
#include <ctime>
#include "sort.h"
#include <iterator>
#include <algorithm>
#include <time.h>


using namespace std;



int main()
{   
    // srand(time(NULL));
    // int size=15000;
    // int sample_size=5;
    // int** carrier=generate_carrier(size,sample_size);
    // string filename="./data/data_15000.txt";
    // // print(carrier,sample_size);
    // cout<<filename<<endl;
    // read_dataset(carrier,filename,size,sample_size);
    // int* arr=carrier[4];
    // cout<<arr<<endl;
    // cout<<a.first<<endl;
    // clock_t start, end;
    // double cpu_time_used;
    // int ex[]={97190275, 1605487400, 1233402024, 668326024, 67612281, 1091251139, 1283992095, 1240647902, 1119183112, 534413269, 205015324, 1254725825, 804232406, 1008255039, 1563976303, 1688224816, 146189766, 851540818, 357329451, 1186451247, 1286002255, 138812497, 1076001262, 1246618809, 848013575, 254192060, 164048551, 1235104751, 1299702862, 621271910};
    // int n=sizeof(ex)/sizeof(int);
    // // cout<<n<<endl;
    
    // int *a=make_copy(ex,n);
    // int *b=make_copy(ex,n);
    // int *c=make_copy(ex,n);
    // int *d=make_copy(ex,n);
    // int *e=make_copy(ex,n);
    // int *f=make_copy(ex,n);


    // start = clock();
    // bubble_sort(a,n);
    // selection_sort(b,n);
    // insertion_sort(c,n);
    // int* d1=merge_sort(ex,n);
    // int sample_size=5;
    // int** carrier=generate_carrier(70000,sample_size);

    // string filename="./data/data_"+to_string(70000)+".txt";
    // quick_sort(e,0,n-1);
    // // shell_sort(f,n);
    // end = clock();
    // cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    // print(ex,n);
    // cout<<"_________________________"<<endl;
    // print(a,n);
    // print(b,n);
    // print(c,n);
    // print(d1,n);
    // print(e,n);
    // print(f,n);
    // cout<<cpu_time_used<<endl;


    // copy(begin(arr), end(arr), begin(dest));

    // print(arr,size);

        string name=test1(15000);
        cout<<name<<endl;

        string name=test2(15000);
        cout<<name<<endl;

        string name=test3(15000);
        cout<<name<<endl;

        string name=test4(15000);
        cout<<name<<endl;

        string name=test5(15000);
        cout<<name<<endl;






    
    return 0;
}