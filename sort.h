#ifndef SORT_H
#define SORT_H
using namespace std;

    void print(int *num,int n);
    int* merge(int *a1,int n1,int*a2,int n2);
    int partition(int* num,int n,int l,int h);
    void bubble_sort(int *num,int n);
    void selection_sort(int* num,int n);
    void insertion_sort(int* num, int n);
    int* merge_sort(int *num,int n);
    void quick_sort(int* num,int n,int l, int h);
    void shell_sort(int*num,int n);
   

#endif