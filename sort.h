#ifndef SORT_H
#define SORT_H
#include <bits/stdc++.h>

using namespace std;
    //dataset
    
    int* make_copy(int* num,int size); //make copy of the array and return a pointer to the head
    void read_dataset(int **arr,string filename,int size,int sample); //read premake dataset
    string generate_array(int size,int sample); //generate data set on size and sample size
    string generate_array_descend(int size,int sample);
    string generate_array_ascend(int size,int sample); 
    int ** generate_carrier(int size,int sample); //generate 2 dimension array sample row, size column

    //test
    string test(int size);  //original test
    string test1(int size);  //mix position test
    string test2(int size);  //ascend
    string test3(int size);  //descend
    string test4();  //ascend for 250000
    string test5();  //ascend for 250000

    //sort
    void print(int** num,int size); //print int**
    void print(int *num,int n); //print int*
    int* merge(int *a1,int n1,int*a2,int n2); //merge for merge sort
    int partition(int* num,int n,int l,int h); //partition for quick sort
    void bubble_sort(int *num,int n); //bubble sort implementation
    void selection_sort(int* num,int n); //selection sort implementation
    void insertion_sort(int* num, int n); //insertion sort implementation
    int* merge_sort(int *num,int n); //merge sort implementation
    void quickSort(int* num,int n,int l, int h); //quick sort self implementation
    void quick_sort(int arr[], int low, int high) ; //quick sort online implementation
    void shell_sort(int*num,int n); //shell sort implementation
   

#endif