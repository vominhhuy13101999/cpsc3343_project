#ifndef SORT_H
#define SORT_H
#include <bits/stdc++.h>

using namespace std;
    //dataset
    
    int* make_copy(int* num,int size);
    void read_dataset(int **arr,string filename,int size,int sample);
    string generate_array(int size,int sample);
    string generate_array_descend(int size,int sample);
    string generate_array_ascend(int size,int sample);
    int ** generate_carrier(int size,int sample);

    //test
    string test(int size);  //original test
    string test1(int size);  //mix position test
    string test2(int size);  //ascend
    string test3(int size);  //descend
    string test4(int size); 
    string test5(int size);

    //sort
    void print(int** num,int size);
    void print(int *num,int n);
    int* merge(int *a1,int n1,int*a2,int n2);
    int partition(int* num,int n,int l,int h);
    void bubble_sort(int *num,int n);
    void selection_sort(int* num,int n);
    void insertion_sort(int* num, int n);
    int* merge_sort(int *num,int n);
    void quickSort(int* num,int n,int l, int h);
    void quick_sort(int arr[], int low, int high) ;
    void shell_sort(int*num,int n);
   

#endif