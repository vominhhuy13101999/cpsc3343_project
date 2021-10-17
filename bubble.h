#ifndef __BUBBLE_H__
#define __BUBBLE_H__
#include <functional>
#include <string>
#include <vector>

class bubble_sort
{
    public:
        
        int[] sort(int[] arr) ;                  //sort int array
        void swap(int& a, int& b);               //swap element
        void print(int arr[], int size);
};

#endif